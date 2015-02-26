#include "RevMob.h"

#include <QAndroidJniEnvironment>
#include <QAndroidJniObject>

RevMob *RevMob::instance()
{
    static RevMob revmob;
    return &revmob;
}

void RevMob::startSession(const QString& appId)
{
    QAndroidJniObject param = QAndroidJniObject::fromString(appId);
    QAndroidJniObject::callStaticMethod<void>("com/revmob/RevMobActivityWrapper",
                                              "startSession",
                                              "(Ljava/lang/String;)V",
                                              param.object<jstring>());
}

void RevMob::showFullscreen()
{
    QAndroidJniObject::callStaticMethod<void>("com/revmob/RevMobActivityWrapper", "showFullscreen");
}

void RevMob::showPopup()
{
    QAndroidJniObject::callStaticMethod<void>("com/revmob/RevMobActivityWrapper", "showPopup");
}
