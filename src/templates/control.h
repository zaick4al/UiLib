#ifndef UILIB_CONTROLS_H
#define UILIB_CONTROLS_H

#include <QQmlEngine>
#include <QQuickItem>

namespace UiLib {

class Control : public QQuickItem
{
    Q_OBJECT
    QML_ELEMENT
public:
    Control();
    static QObject *createFromFile(QQmlEngine *p_engine, const QUrl &p_file);
    static QObject *createFromModule(QQmlEngine *p_engine, const QString &p_qmlTypeName, const QString &p_moduleUri);

};

} // namespace UiLib

#endif // UILIB_CONTROLS_H
