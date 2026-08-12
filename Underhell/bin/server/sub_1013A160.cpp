void __thiscall sub_1013A160(void *this)
{
  int v2; // eax
  const char *v3; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  void (__thiscall ***v10)(_DWORD, _DWORD); // [esp+4h] [ebp-8h] BYREF
  int v11; // [esp+8h] [ebp-4h] BYREF

  if ( !*((_BYTE *)this + 800) )
  {
    sub_1042CBA0("dsp_speaker");
    if ( (unsigned __int8)sub_1042C850(&v10) )
    {
      v2 = *((_DWORD *)this + 209);
      if ( !v2 )
        v2 = atoi(*(const char **)(v11 + 32));
      v3 = (const char *)*((_DWORD *)this + 65);
      if ( !v3 )
        v3 = String;
      DevMsg(2, "Microphone %s set dsp_speaker to %d.\n", v3, v2);
      (**v10)(v10, *((_DWORD *)this + 209));
    }
  }
  if ( *((_DWORD *)this + 206) )
  {
    v11 = *(_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
    if ( sub_10319100(&v11) == -1 )
    {
      v4 = *(_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
      v5 = dword_106B0004;
      v6 = dword_106B0004;
      if ( dword_106B0004 + 1 > dword_106AFFFC )
      {
        sub_102ABFC0(dword_106B0004 - dword_106AFFFC + 1);
        v5 = dword_106B0004;
      }
      v7 = dword_106AFFF8;
      dword_106B0004 = v5 + 1;
      v8 = v5 - v6;
      dword_106B0008 = dword_106AFFF8;
      if ( v8 > 0 )
      {
        memcpy((void *)(dword_106AFFF8 + 4 * v6 + 4), (const void *)(dword_106AFFF8 + 4 * v6), 4 * v8);
        v7 = dword_106AFFF8;
      }
      v9 = (_DWORD *)(v7 + 4 * v6);
      if ( v9 )
        *v9 = v4;
    }
  }
}
