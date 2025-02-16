#include "icons.h"
#include <QQmlEngine>

namespace UiLib {
Icons::Icons() : m_accept(QUrl("qrc:/UiLib/resources/icons/accept.svg")),
    m_bow(QUrl("qrc:/UiLib/resources/icons/bow.svg")),
    m_campfire(QUrl("qrc:/UiLib/resources/icons/campfire.svg")),
    m_character(QUrl("qrc:/UiLib/resources/icons/character.svg")),
    m_close(QUrl("qrc:/UiLib/resources/icons/close.svg")),
    m_connect(QUrl("qrc:/UiLib/resources/icons/connect.svg")),
    m_connectClient(QUrl("qrc:/UiLib/resources/icons/connect_client.svg")),
    m_crossbow(QUrl("qrc:/UiLib/resources/icons/crossbow.svg")),
    m_dagger(QUrl("qrc:/UiLib/resources/icons/dagger.svg")),
    m_dice(QUrl("qrc:/UiLib/resources/icons/dice.svg")),
    m_disconnect(QUrl("qrc:/UiLib/resources/icons/disconnect.svg")),
    m_disconnectClient(QUrl("qrc:/UiLib/resources/icons/disconnect_client.svg")),
    m_droplet(QUrl("qrc:/UiLib/resources/icons/droplet.svg")),
    m_error(QUrl("qrc:/UiLib/resources/icons/error.svg")),
    m_fire(QUrl("qrc:/UiLib/resources/icons/fire.svg")),
    m_hourglass(QUrl("qrc:/UiLib/resources/icons/hourglass.svg")),
    m_lute(QUrl("qrc:/UiLib/resources/icons/lute.svg")),
    m_moon(QUrl("qrc:/UiLib/resources/icons/moon.svg")),
    m_musket(QUrl("qrc:/UiLib/resources/icons/musket.svg")),
    m_refresh(QUrl("qrc:/UiLib/resources/icons/refresh.svg")),
    m_refreshButton(QUrl("qrc:/UiLib/resources/icons/refresh_button.svg")),
    m_saveAccepted(QUrl("qrc:/UiLib/resources/icons/save_accepted.svg")),
    m_saveSent(QUrl("qrc:/UiLib/resources/icons/save_sent.svg")),
    m_settings(QUrl("qrc:/UiLib/resources/icons/settings.svg")),
    m_server(QUrl("qrc:/UiLib/resources/icons/server.svg")),
    m_shield(QUrl("qrc:/UiLib/resources/icons/shield.svg")),
    m_star(QUrl("qrc:/UiLib/resources/icons/star.svg")),
    m_sun(QUrl("qrc:/UiLib/resources/icons/sun.svg")),
    m_sword(QUrl("qrc:/UiLib/resources/icons/sword.svg")),
    m_warning(QUrl("qrc:/UiLib/resources/icons/warning.svg")),
    m_axe(QUrl("qrc:/UiLib/resources/icons/axe.svg")),
    m_book(QUrl("qrc:/UiLib/resources/icons/book.svg")),
    m_book_opened(QUrl("qrc:/UiLib/resources/icons/book_opened.svg")),
    m_branch(QUrl("qrc:/UiLib/resources/icons/branch.svg")),
    m_check(QUrl("qrc:/UiLib/resources/icons/check.svg")),
    m_d4(QUrl("qrc:/UiLib/resources/icons/d4.svg")),
    m_d6(QUrl("qrc:/UiLib/resources/icons/d6.svg")),
    m_d8(QUrl("qrc:/UiLib/resources/icons/d8.svg")),
    m_d10(QUrl("qrc:/UiLib/resources/icons/d10.svg")),
    m_d12(QUrl("qrc:/UiLib/resources/icons/d12.svg")),
    m_d20(QUrl("qrc:/UiLib/resources/icons/d20.svg")),
    m_grid(QUrl("qrc:/UiLib/resources/icons/grid.svg")),
    m_key(QUrl("qrc:/UiLib/resources/icons/key.svg")),
    m_pentagram(QUrl("qrc:/UiLib/resources/icons/pentagram.svg")),
    m_spellbook(QUrl("qrc:/UiLib/resources/icons/spellbook.svg"))
{
    QQmlEngine::setObjectOwnership(this, QQmlEngine::CppOwnership);
}

Icons *Icons::create(QQmlEngine *p_qmlEngine, QJSEngine *p_jsEngine)
{
    return &UiIcons;
}

Icons &Icons::instance()
{
    static Icons iconsInstance;
    return iconsInstance;
}

QUrl Icons::accept() const
{
    return m_accept;
}

QUrl Icons::character() const
{
    return m_character;
}

QUrl Icons::connect() const
{
    return m_connect;
}

QUrl Icons::connectClient() const
{
    return m_connectClient;
}

QUrl Icons::disconnect() const
{
    return m_disconnect;
}

QUrl Icons::disconnectClient() const
{
    return m_disconnectClient;
}

QUrl Icons::error() const
{
    return m_error;
}

QUrl Icons::moon() const
{
    return m_moon;
}

QUrl Icons::refresh() const
{
    return m_refresh;
}

QUrl Icons::refreshButton() const
{
    return m_refreshButton;
}

QUrl Icons::saveAccepted() const
{
    return m_saveAccepted;
}

QUrl Icons::saveSent() const
{
    return m_saveSent;
}

QUrl Icons::settings() const
{
    return m_settings;
}

QUrl Icons::sun() const
{
    return m_sun;
}

QUrl Icons::warning() const
{
    return m_warning;
}

QUrl Icons::hourglass() const
{
    return m_hourglass;
}

QUrl Icons::close() const
{
    return m_close;
}

QUrl Icons::star() const
{
    return m_star;
}

QUrl Icons::dice() const
{
    return m_dice;
}

QUrl Icons::sword() const
{
    return m_sword;
}

QUrl Icons::campfire() const
{
    return m_campfire;
}

QUrl Icons::droplet() const
{
    return m_droplet;
}

QUrl Icons::shield() const
{
    return m_shield;
}

QUrl Icons::fire() const
{
    return m_fire;
}

QUrl Icons::musket() const
{
    return m_musket;
}

QUrl Icons::bow() const
{
    return m_bow;
}

QUrl Icons::crossbow() const
{
    return m_crossbow;
}

QUrl Icons::dagger() const
{
    return m_dagger;
}

QUrl Icons::lute() const
{
    return m_lute;
}

QUrl Icons::axe() const
{
    return m_axe;
}

QUrl Icons::book() const
{
    return m_book;
}

QUrl Icons::book_opened() const
{
    return m_book_opened;
}

QUrl Icons::branch() const
{
    return m_branch;
}

QUrl Icons::d4() const
{
    return m_d4;
}

QUrl Icons::d6() const
{
    return m_d6;
}

QUrl Icons::d8() const
{
    return m_d8;
}

QUrl Icons::d10() const
{
    return m_d10;
}

QUrl Icons::d12() const
{
    return m_d12;
}

QUrl Icons::d20() const
{
    return m_d20;
}

QUrl Icons::grid() const
{
    return m_grid;
}

QUrl Icons::key() const
{
    return m_key;
}

QUrl Icons::pentagram() const
{
    return m_pentagram;
}

QUrl Icons::spellbook() const
{
    return m_spellbook;
}

QUrl Icons::check() const
{
    return m_check;
}

QUrl Icons::server() const
{
    return m_server;
}

}
