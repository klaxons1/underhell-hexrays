int __thiscall sub_1006DC50(_BYTE *this)
{
  bool v2; // zf
  int v3; // eax
  _BYTE v5[8]; // [esp+10h] [ebp-20h] BYREF
  int v6; // [esp+18h] [ebp-18h]
  int v7; // [esp+24h] [ebp-Ch]
  int v8; // [esp+28h] [ebp-8h]

  v2 = this[812] == 0;
  v3 = *(_DWORD *)this;
  v6 = 0;
  v7 = -1;
  v8 = 0;
  if ( v2 )
  {
    (*(void (__stdcall **)(_BYTE *))(v3 + 724))(v5);
  }
  else
  {
    (*(void (__stdcall **)(_BYTE *))(v3 + 720))(v5);
    this[812] = 0;
  }
  return sub_100EC3F0(0, 0.0, 0);
}
