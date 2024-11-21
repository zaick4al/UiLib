#include "control.h"

namespace UiLib {

Control::Control()
{

}

QObject *Control::createFromFile(QQmlEngine *p_engine, const QUrl &p_file)
{
    QQmlComponent component(p_engine, p_file);
    if (component.status() == QQmlComponent::Status::Error)qDebug() << component.errorString();
    return component.create();
}

QObject *Control::createFromModule(QQmlEngine *p_engine, const QString &p_qmlTypeName,
                                   const QString &p_moduleUri)
{
    QQmlComponent component = QQmlComponent(p_engine, p_moduleUri, p_qmlTypeName);
    if (component.status() == QQmlComponent::Status::Error)
        qDebug() << component.errorString();
    return component.create();
}

} // namespace UiLib
