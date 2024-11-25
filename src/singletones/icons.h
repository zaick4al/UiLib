#ifndef ICONS_H
#define ICONS_H

#include <QQuickItem>

#ifndef UiIcons
#define UiIcons UiLib::Icons::instance()
#endif //UiIcons

namespace UiLib
{
/**
 * @brief The Icons class
 * @details QML/C++ singleton for providing easier access to icon resources stored in library.
 * Has definition for simpler use in C++: UiIcons.
 * @warning All icons have useable properties, it just was too much to document. Just use them as always.
 */
class Icons : public QQuickItem
{
    Q_OBJECT
    QML_ELEMENT
    QML_SINGLETON
    /**
     * @private
     */
    Q_PROPERTY(QUrl accept READ accept CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl axe READ axe CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl campfire READ campfire CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl book READ book CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl book_opened READ book_opened CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl bow READ bow CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl branch READ branch CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl character READ character CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl close READ close CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl connect READ connect CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl connectClient READ connectClient CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl check READ check CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl crossbow READ crossbow CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl d4 READ d4 CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl d6 READ d6 CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl d8 READ d8 CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl d10 READ d10 CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl d12 READ d12 CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl d20 READ d20 CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl dagger READ dagger CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl dice READ dice CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl disconnect READ disconnect CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl disconnectClient READ disconnectClient CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl droplet READ droplet CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl error READ error CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl fire READ fire CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl grid READ grid CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl hourglass READ hourglass CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl key READ key CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl lute READ lute CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl moon READ moon CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl musket READ musket CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl pentagram READ pentagram CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl refresh READ refresh CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl refreshButton READ refreshButton CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl saveAccepted READ saveAccepted CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl saveSent READ saveSent CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl settings READ settings CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl server READ server CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl shield READ shield CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl spellbook READ spellbook CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl star READ star CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl sun READ sun CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl sword READ sword CONSTANT FINAL)
    /**
     * @private
     */
    Q_PROPERTY(QUrl warning READ warning CONSTANT FINAL)
public:
    /**
     * @private
     */
    Icons();
    /**
     * @private
     */
    Icons(Icons &&) = delete;
    /**
     * @private
     */
    Icons &operator=(Icons &&) = delete;

    /**
     * @brief instance
     * @details Access provider to global singletone instance.
     * @warning You can use simpler version. Just write UiIcons instead of UiLib::Icons::instance().
     * @return &Settings
     */
    static Icons &instance();

    /**
     * @brief accept
     * @return QUrl of the accept icon
     */
    QUrl accept() const;

    /**
     * @brief character
     * @return QUrl of the character icon
     */
    QUrl character() const;
    /**
     * @brief connect
     * @return QUrl of the connect icon
     */
    QUrl connect() const;
    /**
     * @brief connectClient
     * @return QUrl of the connection of client icon
     */
    QUrl connectClient() const;
    /**
     * @brief disconnect
     * @return QUrl of the disconnect icon
     */
    QUrl disconnect() const;
    /**
     * @brief disconnectClient
     * @return QUrl of the disconnection of client icon
     */
    QUrl disconnectClient() const;
    /**
     * @brief error
     * @return QUrl of the error icon
     */
    QUrl error() const;
    /**
     * @brief moon
     * @return QUrl of the moon icon
     */
    QUrl moon() const;
    /**
     * @brief refresh
     * @return QUrl of the refresh icon
     */
    QUrl refresh() const;
    /**
     * @brief refreshButton
     * @return QUrl of the refresh button icon
     */
    QUrl refreshButton() const;
    /**
     * @brief saveAccepted
     * @return QUrl of the icon identifying that data saved succesfully
     */
    QUrl saveAccepted() const;
    /**
     * @brief saveSent
     * @return QUrl of the icon identifying that data sent successfully
     */
    QUrl saveSent() const;
    /**
     * @brief settings
     * @return QUrl of the settings icon
     */
    QUrl settings() const;
    /**
     * @brief sun
     * @return QUrl of the sun icon
     */
    QUrl sun() const;
    /**
     * @brief warning
     * @return QUrl of the warning icon
     */
    QUrl warning() const;
    /**
     * @brief hourglass
     * @return QUrl of the hourglass icon
     */
    QUrl hourglass() const;
    /**
     * @brief close
     * @return QUrl of the close icon
     */
    QUrl close() const;
    /**
     * @brief star
     * @return QUrl of the star icon
     */
    QUrl star() const;
    /**
     * @brief dice
     * @return QUrl of the dice icon
     */
    QUrl dice() const;
    /**
     * @brief sword
     * @return QUrl of the sword icon
     */
    QUrl sword() const;
    /**
     * @brief campfire
     * @return QUrl of the campfire icon
     */
    QUrl campfire() const;
    /**
     * @brief droplet
     * @return QUrl of the droplet icon
     */
    QUrl droplet() const;
    /**
     * @brief shield
     * @return QUrl of the shield icon
     */
    QUrl shield() const;
    /**
     * @brief fire
     * @return QUrl of the fire icon
     */
    QUrl fire() const;
    /**
     * @brief musket
     * @return QUrl of the musket icon
     */
    QUrl musket() const;
    /**
     * @brief bow
     * @return QUrl of the bow icon
     */
    QUrl bow() const;
    /**
     * @brief crossbow
     * @return QUrl of the crossbow icon
     */
    QUrl crossbow() const;
    /**
     * @brief dagger
     * @return QUrl of the dagger icon
     */
    QUrl dagger() const;
    /**
     * @brief lute
     * @return QUrl of the lute icon
     */
    QUrl lute() const;
    /**
     * @brief axe
     * @return QUrl of the axe icon
     */
    QUrl axe() const;
    /**
     * @brief book
     * @return QUrl of the book icon
     */
    QUrl book() const;
    /**
     * @brief book_opened
     * @return QUrl of the opened book icon
     */
    QUrl book_opened() const;
    /**
     * @brief branch
     * @return QUrl of the branch icon
     */
    QUrl branch() const;
    /**
     * @brief d4
     * @return QUrl of the d4 icon
     */
    QUrl d4() const;
    /**
     * @brief d6
     * @return QUrl of the d6 icon
     */
    QUrl d6() const;
    /**
     * @brief d8
     * @return QUrl of the d8 icon
     */
    QUrl d8() const;
    /**
     * @brief d10
     * @return QUrl of the d10 icon
     */
    QUrl d10() const;
    /**
     * @brief d12
     * @return QUrl of the d12 icon
     */
    QUrl d12() const;
    /**
     * @brief d20
     * @return QUrl of the d20 icon
     */
    QUrl d20() const;
    /**
     * @brief grid
     * @return QUrl of the grid icon
     */
    QUrl grid() const;
    /**
     * @brief key
     * @return QUrl of the key icon
     */
    QUrl key() const;
    /**
     * @brief pentagram
     * @return QUrl of the pentagram icon
     */
    QUrl pentagram() const;
    /**
     * @brief spellbook
     * @return QUrl of the spellbook icon
     */
    QUrl spellbook() const;
    /**
     * @brief check
     * @return QUrl of the check icon
     */
    QUrl check() const;
    /**
     * @brief server
     * @return QUrl of the server icon
     */
    QUrl server() const;

private:
    /**
     * @Private
     */
    Icons(Icons const&) = delete;
    /**
     * @private
     */
    void operator=(Icons const&) = delete;
    /**
     * @private
     */
    QUrl m_accept;
    /**
     * @private
     */
    QUrl m_character;
    /**
     * @private
     */
    QUrl m_connect;
    /**
     * @private
     */
    QUrl m_connectClient;
    /**
     * @private
     */
    QUrl m_disconnect;
    /**
     * @private
     */
    QUrl m_disconnectClient;
    /**
     * @private
     */
    QUrl m_error;
    /**
     * @private
     */
    QUrl m_moon;
    /**
     * @private
     */
    QUrl m_refresh;
    /**
     * @private
     */
    QUrl m_refreshButton;
    /**
     * @private
     */
    QUrl m_saveAccepted;
    /**
     * @private
     */
    QUrl m_saveSent;
    /**
     * @private
     */
    QUrl m_settings;
    /**
     * @private
     */
    QUrl m_sun;
    /**
     * @private
     */
    QUrl m_warning;
    /**
     * @private
     */
    QUrl m_hourglass;
    /**
     * @private
     */
    QUrl m_close;
    /**
     * @private
     */
    QUrl m_star;
    /**
     * @private
     */
    QUrl m_dice;
    /**
     * @private
     */
    QUrl m_sword;
    /**
     * @private
     */
    QUrl m_campfire;
    /**
     * @private
     */
    QUrl m_droplet;
    /**
     * @private
     */
    QUrl m_shield;
    /**
     * @private
     */
    QUrl m_fire;
    /**
     * @private
     */
    QUrl m_musket;
    /**
     * @private
     */
    QUrl m_bow;
    /**
     * @private
     */
    QUrl m_crossbow;
    /**
     * @private
     */
    QUrl m_dagger;
    /**
     * @private
     */
    QUrl m_lute;
    /**
     * @private
     */
    QUrl m_axe;
    /**
     * @private
     */
    QUrl m_book;
    /**
     * @private
     */
    QUrl m_book_opened;
    /**
     * @private
     */
    QUrl m_branch;
    /**
     * @private
     */
    QUrl m_d4;
    /**
     * @private
     */
    QUrl m_d6;
    /**
     * @private
     */
    QUrl m_d8;
    /**
     * @private
     */
    QUrl m_d10;
    /**
     * @private
     */
    QUrl m_d12;
    /**
     * @private
     */
    QUrl m_d20;
    /**
     * @private
     */
    QUrl m_grid;
    /**
     * @private
     */
    QUrl m_key;
    /**
     * @private
     */
    QUrl m_pentagram;
    /**
     * @private
     */
    QUrl m_spellbook;
    /**
     * @private
     */
    QUrl m_check;
    /**
     * @private
     */
    QUrl m_server;

};
}

#endif // ICONS_H
