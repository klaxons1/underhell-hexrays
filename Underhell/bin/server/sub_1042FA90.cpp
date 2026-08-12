void sub_1042FA90()
{
  _DWORD *v0; // eax
  int v1; // esi
  int v2; // edx

  if ( !byte_106FF8E4 )
  {
    v0 = (_DWORD *)sub_10184390(72);
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
      dword_106FF8C8 = v1;
    }
    else
    {
      dword_106FF8C8 = 0;
    }
    byte_106FF8E4 = 1;
  }
}
