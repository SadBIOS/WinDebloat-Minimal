#include <stdlib.h>
#include "driver.h"

int appx(void){
    int i;
    char cmd[500][1000] = {
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.OutlookForWindows* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.Copilot* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Clipchamp.Clipchamp* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.3DBuilder* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.549981C3F5F10* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.BingFinance* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.BingFoodAndDrink* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.BingHealthAndFitness* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.BingNews* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.BingSports* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.BingTranslator* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.BingTravel* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.BingWeather* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.Messaging* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.Microsoft3DViewer* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.MicrosoftJournal* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.MicrosoftOfficeHub* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.MicrosoftPowerBIForWindows* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.MicrosoftSolitaireCollection* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.MicrosoftStickyNotes* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.MixedReality.Portal* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.NetworkSpeedTest* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.News* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.Office.OneNote* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.Office.Sway* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.OneConnect* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.Print3D* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.SkypeApp* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.Todos* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.WindowsAlarms* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.WindowsFeedbackHub* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.WindowsMaps* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.WindowsSoundRecorder* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.XboxApp* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.ZuneVideo* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *MicrosoftCorporationII.MicrosoftFamily* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *MicrosoftCorporationII.QuickAssist* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *MicrosoftTeams* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *MSTeams* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *ACGMediaPlayer* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *ActiproSoftwareLLC* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *AdobeSystemsIncorporated.AdobePhotoshopExpress* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Amazon.com.Amazon* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *AmazonVideo.PrimeVideo* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Asphalt8Airborne* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *AutodeskSketchBook* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *CaesarsSlotsFreeCasino* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *COOKINGFEVER* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *CyberLinkMediaSuiteEssentials* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *DisneyMagicKingdoms* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Disney* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *DrawboardPDF* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Duolingo-LearnLanguagesforFree* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *EclipseManager* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Facebook* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *FarmVille2CountryEscape* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *fitbit* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Flipboard* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *HiddenCity* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *HULULLC.HULUPLUS* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *iHeartRadio* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Instagram* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *king.com.BubbleWitch3Saga* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *king.com.CandyCrushSaga* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *king.com.CandyCrushSodaSaga* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *LinkedInforWindows* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *MarchofEmpires* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Netflix* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *NYTCrossword* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *OneCalendar* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *PandoraMediaInc* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *PhototasticCollage* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *PicsArt-PhotoStudio* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Plex* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *PolarrPhotoEditorAcademicEdition* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Royal Revolt* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Shazam* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Sidia.LiveWallpaper* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *SlingTV* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Spotify* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *TikTok* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *TuneInRadio* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Twitter* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Viber* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *WinZipUniversal* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Wunderlist* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *XING* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Windows.DevHome* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.XboxGamingOverlay* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.XboxGameOverlay* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.windowscommunicationsapps* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.GetHelp* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.MSPaint* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.Paint* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.ScreenSketch* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.Whiteboard* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.Windows.Photos* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.WindowsCalculator* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.WindowsCamera* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.WindowsStore* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.WindowsTerminal* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.Xbox.TCUI* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.XboxIdentityProvider* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.XboxSpeechToTextOverlay* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.YourPhone* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.ZuneMusic* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.GamingApp* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.kageookForWindows* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.People* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.PowerAutomateDesktop* | Remove-AppxPackage\"",
        "powershell -NoProfile -Command \"Get-AppxPackage *Microsoft.RemoteDesktop* | Remove-AppxPackage\""
    };
    
    for (i = 0; i < 112; i++){
        system(cmd[i]);
        delay_ms(100);
    }
    return 241;
}