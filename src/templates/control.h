#ifndef UILIB_CONTROLS_H
#define UILIB_CONTROLS_H

#include <QQmlEngine>
#include <QQuickItem>

/**
 * @brief The UiLib namespace
 * @details Main namespace of whole library
 */
namespace UiLib {
/**
 * @brief The Control class
 * @details Class that defines static templates of functions to create elements.
 * @warning Control class is intended to use other classes to inherit from it. It is not recomended to create instances of that class.
 */
class Control : public QQuickItem
{
    Q_OBJECT
    QML_ELEMENT
public:
    /**
     * @private
     */
    Control();
    /**
     * @brief createFromFile
     * @param QQmlEngine *p_engine
     * @param const QUrl &p_file
     * @return QObject*
     * @details Method creates Qml Element from provided url in instance of provided engine
     */
    static QObject *createFromFile(QQmlEngine *p_engine, const QUrl &p_file);
    /**
     * @brief createFromModule
     * @param QQmlEngine *p_engine
     * @param const QString &p_qmlTypeName
     * @param const QString &p_moduleUri
     * @return QObject*
     * @details Method creates Qml Element from provided Qml Element name(p_qmlTypeName) and module (p_moduleUri) in instance of provided engine
     */
    static QObject *createFromModule(QQmlEngine *p_engine, const QString &p_qmlTypeName,
                                     const QString &p_moduleUri);

};

} // namespace UiLib

#endif // UILIB_CONTROLS_H
