int __stdcall sub_100F3620(int a1, _BYTE *a2)
{
  DWORD CurrentThreadId; // ecx
  double v3; // st7
  int result; // eax
  float v5[3]; // [esp+0h] [ebp-10h] BYREF
  int v6; // [esp+Ch] [ebp-4h]

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 104))(dword_1041315C) )
  {
    CurrentThreadId = GetCurrentThreadId();
    if ( CurrentThreadId != dword_10435DEC && _InterlockedCompareExchange(&dword_10435DEC, CurrentThreadId, 0) )
    {
      _mm_pause();
      CThreadFastMutex::Lock(&dword_10435DEC, CurrentThreadId, 0);
    }
    else
    {
      ++dword_10435DF0;
    }
    (*(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)dword_1041315C + 4))(dword_1041315C, v5, a1, 1);
    if ( !--dword_10435DF0 )
      _InterlockedExchange(&dword_10435DEC, 0);
    v3 = v5[0];
    a2[3] = 0;
    v6 = (int)(v3 * 255.0);
    *a2 = v6;
    a2[1] = (int)(v5[1] * 255.0);
    result = HIWORD(a2) | 0xC00;
    a2[2] = (int)(255.0 * v5[2]);
  }
  else
  {
    result = (int)a2;
    *(_DWORD *)a2 = -1;
  }
  return result;
}
