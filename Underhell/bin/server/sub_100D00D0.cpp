int __thiscall sub_100D00D0(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  float v9; // [esp+18h] [ebp-58h]
  _BYTE v10[52]; // [esp+28h] [ebp-48h] BYREF
  float v11; // [esp+5Ch] [ebp-14h]
  float v12; // [esp+60h] [ebp-10h]

  v2 = *this;
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 1208))(this);
  (*(void (__thiscall **)(_DWORD *, int))(v2 + 104))(this, v3);
  (*(void (__thiscall **)(_DWORD *))(*this + 592))(this);
  v4 = (*(int (__thiscall **)(_DWORD *))(this[80] + 48))(this + 80);
  if ( sub_100E9550(2, v4 | 8, 0, 0) )
  {
    if ( (this[62] & 1) != 0 )
    {
      v5 = dword_106BAFEC;
      v6 = this[106];
      if ( dword_106BAFEC )
      {
        if ( v6 )
        {
          sub_100CFA00(v10);
          sub_100CFD60(v10, v5, v6);
          v11 = 4545.4546;
          v12 = 4545.4546;
          v7 = (*(int (__thiscall **)(int, int, int, _DWORD, _BYTE *))(*(_DWORD *)dword_106BAFF4 + 68))(
                 dword_106BAFF4,
                 v5,
                 v6,
                 0,
                 v10);
          this[313] = v7;
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v7 + 12))(v7, this);
        }
      }
    }
  }
  else
  {
    sub_100E0970(5, 0);
    sub_10112C00(2);
    sub_101129A0(*((unsigned __int16 *)this + 178) | 8);
  }
  (*(void (__thiscall **)(_DWORD *))(*this + 908))(this);
  sub_100EC3F0((int)sub_100CFD10, 0.0, 0);
  v9 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0(v9, 0);
}
