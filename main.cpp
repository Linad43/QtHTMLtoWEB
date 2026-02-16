#include <QApplication>
#include <QWidget>
#include <QHBoxLayout>
#include <QTextEdit>
#include <QWebEngineView>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Главное окно
    QWidget window;
    window.setWindowTitle("HTML Live Editor");
    window.resize(1000, 600);

    // Layout
    auto *layout = new QHBoxLayout(&window);

    // Виджеты
    auto *editor = new QTextEdit();
    auto *webView = new QWebEngineView();

    // Добавляем в layout
    layout->addWidget(editor);
    layout->addWidget(webView);

    // Растягиваем поровну
    layout->setStretch(0, 1);
    layout->setStretch(1, 1);

    // Начальный HTML
    editor->setPlainText(
        "<html>\n"
        "<head>\n"
        "<style>\n"
        "body { font-family: Arial; background: #f5f5f5; }\n"
        "h1 { color: darkblue; }\n"
        "</style>\n"
        "</head>\n"
        "<body>\n"
        "<h1>Hello Qt!</h1>\n"
        "<p>Edit HTML on the left.</p>\n"
        "</body>\n"
        "</html>"
    );

    // Обновление WebView при изменении текста
    QObject::connect(editor, &QTextEdit::textChanged, [&]() {
        webView->setHtml(editor->toPlainText());
    });

    // Первичная загрузка
    webView->setHtml(editor->toPlainText());

    window.show();
    return app.exec();
}
