#ifndef _VIMCI_PLAYER_WIN32_H_
#define _VIMCI_PLAYER_WIN32_H_

#include<windows.h>
#include <mmsystem.h>

namespace VISS {

class VIMciPlayer
{
public:
    VIMciPlayer();
    ~VIMciPlayer();

    void Close();

    /**
    @brief 播放声音文件
    @param pFileName 播放的声音文件名称，需要皝E募穆肪�
    @param nTimes    播放声音文件的循环次数，默认值为 1，即播放一次
    */
    void Open(const char* pFileName, UINT uId);

    void Play(UINT uTimes = 1);

    /**
    @brief 暂停播放声襾E
    */
    void Pause();

    /**
    @brief 继续播放声襾E
    */
    void Resume();

    /**
    @brief 停止播放声襾E
    */
    void Stop();

    /**
    @brief 重新播放
    */
    void Rewind();

    /**
    @brief 获取播放器当前是否正在播放中
    */
    bool IsPlaying();

    /**
    @brief 获取当前播放的音效 ID
    @return 当前播放的音效ID
    */
    UINT GetSoundID();

private:
    friend LRESULT WINAPI _SoundPlayProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);

    void _SendGenericCommand(int nCommand);

    HWND        m_hWnd;
    MCIDEVICEID m_hDev;
    UINT        m_nSoundID;
    UINT        m_uTimes;
    bool        m_bPlaying;
};

} // end of namespace CocosDenshion

#endif
