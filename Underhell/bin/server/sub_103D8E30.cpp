int __thiscall sub_103D8E30(void *this)
{
  int v1; // esi
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // esi
  int v7[32]; // [esp+14h] [ebp-9Ch] BYREF
  int v8[5]; // [esp+94h] [ebp-1Ch] BYREF
  void *v9; // [esp+A8h] [ebp-8h]
  int v10; // [esp+ACh] [ebp-4h]

  v9 = this;
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    v10 = sub_10261B20();
  else
    v10 = 0;
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    v1 = sub_10261B20();
  else
    v1 = 0;
  if ( (*(_DWORD *)(v1 + 252) & 0x800) != 0 )
    sub_100DAE60(v1);
  sub_1025F990(v8, (int)v7, 32, 0);
  v2 = sub_1025FA20(v1 + 580, 180.0, (int)v8);
  if ( v2 <= 0 )
    return v10;
  v3 = 0;
  v4 = v2 - 1;
  while ( 1 )
  {
    v5 = v7[(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, v4)];
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 284))(v5) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)v9 + 876))(v9, v5) )
        break;
    }
    if ( ++v3 >= 10 )
      return v10;
  }
  return v5;
}
