void sub_102310A0()
{
  _DWORD *v0; // eax
  int v1; // esi
  int v2; // edx

  if ( !byte_1047B820 )
  {
    v0 = (_DWORD *)sub_100DDA40(72);
    v1 = (int)v0;
    if ( v0 )
    {
      v0[1] = 0;
      v0[2] = 32;
      v0[3] = 0;
      v0[1] = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 384);
      v2 = *(_DWORD *)(v1 + 4);
      *(_DWORD *)(v1 + 16) = 0xFFFF;
      *(_DWORD *)(v1 + 20) = -1;
      *(_DWORD *)(v1 + 24) = v2;
      *(_BYTE *)(v1 + 28) = 0;
      *(_DWORD *)(v1 + 36) = 0;
      *(_DWORD *)(v1 + 40) = 0;
      *(_DWORD *)(v1 + 44) = 8;
      *(_DWORD *)(v1 + 48) = 0;
      *(_DWORD *)(v1 + 52) = 0;
      CThreadSpinRWLock::CThreadSpinRWLock((CThreadSpinRWLock *)(v1 + 56));
      dword_1047B804 = v1;
    }
    else
    {
      dword_1047B804 = 0;
    }
    byte_1047B820 = 1;
  }
}
