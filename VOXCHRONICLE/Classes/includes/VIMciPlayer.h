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
    @brief ���������ļ�
    @param pFileName ���ŵ������ļ����ƣ���Ҫ��E��ļ���·��
    @param nTimes    ���������ļ���ѭ��������Ĭ��ֵΪ 1��������һ��
    */
    void Open(const char* pFileName, UINT uId);

    void Play(UINT uTimes = 1);

    /**
    @brief ��ͣ������ҁE
    */
    void Pause();

    /**
    @brief ����������ҁE
    */
    void Resume();

    /**
    @brief ֹͣ������ҁE
    */
    void Stop();

    /**
    @brief ���²���
    */
    void Rewind();

    /**
    @brief ��ȡ��������ǰ�Ƿ����ڲ�����
    */
    bool IsPlaying();

    /**
    @brief ��ȡ��ǰ���ŵ���Ч ID
    @return ��ǰ���ŵ���ЧID
    */
    UINT GetSoundID();

    float GetDuration();
    float GetPosition();
    void SetVolume(float volume);

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
