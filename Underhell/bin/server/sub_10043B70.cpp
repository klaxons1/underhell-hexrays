char __thiscall sub_10043B70(_BYTE *this)
{
  int v2; // eax
  _BYTE *v3; // ecx
  float *v4; // esi
  int v5; // ecx
  _DWORD *v6; // edi
  int v7; // eax
  _DWORD *v8; // edi
  int v9; // eax
  float v11; // [esp+0h] [ebp-Ch]

  LOBYTE(v2) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1752))(this);
  if ( (_BYTE)v2 )
  {
    LOBYTE(v2) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 2112))(this);
    v3 = this + 2832;
    if ( (_BYTE)v2 )
    {
      v4 = (float *)(this + 2832);
      v5 = *((_DWORD *)v3 + 1);
      if ( *(_DWORD *)(v5 + 2324) != 4
        && (sub_100CF460(v5)
         || ((*(int (__thiscall **)(_DWORD))(**((_DWORD **)v4 + 1) + 1672))(*((_DWORD *)v4 + 1)) & 0x20000) != 0
         || (v2 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)v4 + 1) + 1672))(*((_DWORD *)v4 + 1)),
             (v2 & 0x40000) != 0))
        && (v6 = (_DWORD *)*((_DWORD *)v4 + 1), v7 = sub_10039AE0(v6, 7, 0),
                                                LOBYTE(v2) = sub_10022CA0(v6, v7),
                                                (_BYTE)v2)
        && (v8 = (_DWORD *)*((_DWORD *)v4 + 1),
            v9 = sub_10039AE0(v8, 12, 0),
            LOBYTE(v2) = sub_10022CA0(v8, v9),
            (_BYTE)v2) )
      {
        v11 = *(float *)(dword_106B31C8 + 12) + v4[3];
        LOBYTE(v2) = sub_100B8D50(v11);
        *((_BYTE *)v4 + 9) = 0;
      }
      else
      {
        *((_BYTE *)v4 + 9) = 1;
      }
    }
    else
    {
      this[2841] = 1;
    }
  }
  return v2;
}
