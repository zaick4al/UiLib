#ifndef ICONS_H
#define ICONS_H

#include <QQuickItem>

namespace UiLib
{
class Icons : public QQuickItem
{
    Q_OBJECT
    QML_ELEMENT
    QML_SINGLETON
    Q_PROPERTY(QUrl accept READ accept CONSTANT FINAL)
    Q_PROPERTY(QUrl axe READ axe CONSTANT FINAL)
    Q_PROPERTY(QUrl campfire READ campfire CONSTANT FINAL)
    Q_PROPERTY(QUrl book READ book CONSTANT FINAL)
    Q_PROPERTY(QUrl book_opened READ book_opened CONSTANT FINAL)
    Q_PROPERTY(QUrl bow READ bow CONSTANT FINAL)
    Q_PROPERTY(QUrl branch READ branch CONSTANT FINAL)
    Q_PROPERTY(QUrl character READ character CONSTANT FINAL)
    Q_PROPERTY(QUrl close READ close CONSTANT FINAL)
    Q_PROPERTY(QUrl connect READ connect CONSTANT FINAL)
    Q_PROPERTY(QUrl connectClient READ connectClient CONSTANT FINAL)
    Q_PROPERTY(QUrl check READ check CONSTANT FINAL)
    Q_PROPERTY(QUrl crossbow READ crossbow CONSTANT FINAL)
    Q_PROPERTY(QUrl d4 READ d4 CONSTANT FINAL)
    Q_PROPERTY(QUrl d6 READ d6 CONSTANT FINAL)
    Q_PROPERTY(QUrl d8 READ d8 CONSTANT FINAL)
    Q_PROPERTY(QUrl d10 READ d10 CONSTANT FINAL)
    Q_PROPERTY(QUrl d12 READ d12 CONSTANT FINAL)
    Q_PROPERTY(QUrl d20 READ d20 CONSTANT FINAL)
    Q_PROPERTY(QUrl dagger READ dagger CONSTANT FINAL)
    Q_PROPERTY(QUrl dice READ dice CONSTANT FINAL)
    Q_PROPERTY(QUrl disconnect READ disconnect CONSTANT FINAL)
    Q_PROPERTY(QUrl disconnectClient READ disconnectClient CONSTANT FINAL)
    Q_PROPERTY(QUrl droplet READ droplet CONSTANT FINAL)
    Q_PROPERTY(QUrl error READ error CONSTANT FINAL)
    Q_PROPERTY(QUrl fire READ fire CONSTANT FINAL)
    Q_PROPERTY(QUrl grid READ grid CONSTANT FINAL)
    Q_PROPERTY(QUrl hourglass READ hourglass CONSTANT FINAL)
    Q_PROPERTY(QUrl key READ key CONSTANT FINAL)
    Q_PROPERTY(QUrl lute READ lute CONSTANT FINAL)
    Q_PROPERTY(QUrl moon READ moon CONSTANT FINAL)
    Q_PROPERTY(QUrl musket READ musket CONSTANT FINAL)
    Q_PROPERTY(QUrl pentagram READ pentagram CONSTANT FINAL)
    Q_PROPERTY(QUrl refresh READ refresh CONSTANT FINAL)
    Q_PROPERTY(QUrl refreshButton READ refreshButton CONSTANT FINAL)
    Q_PROPERTY(QUrl saveAccepted READ saveAccepted CONSTANT FINAL)
    Q_PROPERTY(QUrl saveSent READ saveSent CONSTANT FINAL)
    Q_PROPERTY(QUrl settings READ settings CONSTANT FINAL)
    Q_PROPERTY(QUrl server READ server CONSTANT FINAL)
    Q_PROPERTY(QUrl shield READ shield CONSTANT FINAL)
    Q_PROPERTY(QUrl spellbook READ spellbook CONSTANT FINAL)
    Q_PROPERTY(QUrl star READ star CONSTANT FINAL)
    Q_PROPERTY(QUrl sun READ sun CONSTANT FINAL)
    Q_PROPERTY(QUrl sword READ sword CONSTANT FINAL)
    Q_PROPERTY(QUrl warning READ warning CONSTANT FINAL)
public:
    Icons();
    Icons(Icons &&) = delete;
    Icons &operator=(Icons &&) = delete;
    static Icons &instance();

    QUrl accept() const;

    QUrl character() const;

    QUrl connect() const;

    QUrl connectClient() const;

    QUrl disconnect() const;

    QUrl disconnectClient() const;

    QUrl error() const;

    QUrl moon() const;

    QUrl refresh() const;

    QUrl refreshButton() const;

    QUrl saveAccepted() const;

    QUrl saveSent() const;

    QUrl settings() const;

    QUrl sun() const;

    QUrl warning() const;

    QUrl hourglass() const;

    QUrl close() const;

    QUrl star() const;

    QUrl dice() const;

    QUrl sword() const;

    QUrl campfire() const;

    QUrl droplet() const;

    QUrl shield() const;

    QUrl fire() const;

    QUrl musket() const;

    QUrl bow() const;

    QUrl crossbow() const;

    QUrl dagger() const;

    QUrl lute() const;

    QUrl axe() const;

    QUrl book() const;

    QUrl book_opened() const;

    QUrl branch() const;

    QUrl d4() const;

    QUrl d6() const;

    QUrl d8() const;

    QUrl d10() const;

    QUrl d12() const;

    QUrl d20() const;

    QUrl grid() const;

    QUrl key() const;

    QUrl pentagram() const;

    QUrl spellbook() const;

    QUrl check() const;

    QUrl server() const;

signals:

private:
    Icons(Icons const&) = delete;
    void operator=(Icons const&) = delete;
    QUrl m_accept;
    QUrl m_character;
    QUrl m_connect;
    QUrl m_connectClient;
    QUrl m_disconnect;
    QUrl m_disconnectClient;
    QUrl m_error;
    QUrl m_moon;
    QUrl m_refresh;
    QUrl m_refreshButton;
    QUrl m_saveAccepted;
    QUrl m_saveSent;
    QUrl m_settings;
    QUrl m_sun;
    QUrl m_warning;
    QUrl m_hourglass;
    QUrl m_close;
    QUrl m_star;
    QUrl m_dice;
    QUrl m_sword;
    QUrl m_campfire;
    QUrl m_droplet;
    QUrl m_shield;
    QUrl m_fire;
    QUrl m_musket;
    QUrl m_bow;
    QUrl m_crossbow;
    QUrl m_dagger;
    QUrl m_lute;
    QUrl m_axe;
    QUrl m_book;
    QUrl m_book_opened;
    QUrl m_branch;
    QUrl m_d4;
    QUrl m_d6;
    QUrl m_d8;
    QUrl m_d10;
    QUrl m_d12;
    QUrl m_d20;
    QUrl m_grid;
    QUrl m_key;
    QUrl m_pentagram;
    QUrl m_spellbook;
    QUrl m_check;
    QUrl m_server;
};
}

#endif // ICONS_H
