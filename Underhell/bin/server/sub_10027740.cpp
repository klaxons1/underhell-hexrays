char __thiscall sub_10027740(int this)
{
  char result; // al
  int v3; // ecx
  int v4; // edi
  _DWORD *v5; // eax
  double v6; // st7
  int v7; // edi
  float *v8; // ebx
  float v9; // [esp+4h] [ebp-10h]
  float v10; // [esp+8h] [ebp-Ch]

  result = *(_BYTE *)(this + 306);
  if ( result != 6 && result )
  {
    v3 = *(_DWORD *)(this + 424);
    if ( v3 )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 48))(v3, 0);
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 592))(this);
    }
    result = sub_100E9630(1, 0, 0);
    v4 = *(_DWORD *)(this + 424);
    if ( v4 )
    {
      v5 = sub_10001430((_DWORD *)this);
      v6 = sub_10100E80(v5);
      if ( v6 > 0.0 )
      {
        v10 = v6;
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 112))(v4, LODWORD(v10));
      }
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 280))(v4);
      v8 = sub_10023450((float *)this) + 1;
      v9 = (*v8 + *sub_10023450((float *)this)) * 0.5 * 0.5;
      result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 16))(v7, LODWORD(v9));
      *(_BYTE *)(this + 3545) = 1;
    }
  }
  return result;
}
