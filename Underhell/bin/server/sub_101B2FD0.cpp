void __thiscall sub_101B2FD0(_DWORD **this)
{
  int v2; // eax
  int v3; // esi
  _BYTE v4[48]; // [esp+4h] [ebp-48h] BYREF
  float v5[3]; // [esp+34h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+40h] [ebp-Ch] BYREF

  if ( this[200] )
  {
    (*(void (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*this[200] + 40))(this[200], v4, 0);
    v2 = (*(int (__thiscall **)(_DWORD *))(*this[200] + 20))(this[200]);
    v3 = v2;
    if ( v2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 40))(v2) )
      {
        sub_10421CE0(v4, 3, v6);
        (*(void (__thiscall **)(int, float *, _BYTE *))(*(_DWORD *)v3 + 220))(v3, v5, v6);
        sub_100E0D20((int)this, v5);
      }
    }
  }
}
