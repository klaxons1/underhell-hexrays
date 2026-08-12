char __thiscall sub_10059900(int this, int a2)
{
  char v3; // al
  char v4; // cl
  int v5; // ebx
  unsigned __int16 v6; // ax
  char result; // al
  float v8; // [esp+8h] [ebp-10h] BYREF
  float v9; // [esp+Ch] [ebp-Ch]
  float v10; // [esp+10h] [ebp-8h]
  float v11; // [esp+14h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 4) + 128))(this + 4);
  if ( !*(_DWORD *)(dword_1040CE8C + 48) )
    goto LABEL_11;
  v3 = *(_BYTE *)(this + 1961);
  v4 = *(_BYTE *)(this + 1960);
  if ( v3 == v4 )
    goto LABEL_11;
  if ( !v3 || v4 )
  {
    if ( *(_DWORD *)(dword_1040CED4 + 48) )
    {
      v8 = 1.0;
      v9 = 0.0;
      v10 = 0.0;
      v11 = 1.0;
      goto LABEL_10;
    }
  }
  else
  {
    v5 = *(_DWORD *)dword_10413160;
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 132))(this + 4);
    result = (*(int (__thiscall **)(int, _DWORD))(v5 + 52))(dword_10413160, v6);
    if ( !result )
      return result;
    if ( *(_DWORD *)(dword_1040CED4 + 48) )
    {
      v8 = 0.0;
      v9 = 1.0;
      v11 = 1.0;
      v10 = 0.0;
LABEL_10:
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_10413168 + 24))(dword_10413168, &v8);
    }
  }
LABEL_11:
  if ( !*(_BYTE *)(this + 1960) )
  {
    if ( *(_DWORD *)(dword_1040CE8C + 48) )
      *(_DWORD *)(a2 + 44) |= 0x10u;
  }
  *(_BYTE *)(this + 1961) = *(_BYTE *)(this + 1960);
  return 1;
}
