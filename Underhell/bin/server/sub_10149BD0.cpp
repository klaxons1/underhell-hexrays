int __thiscall sub_10149BD0(int this, int a2)
{
  int v4; // ecx
  int v5; // ebx
  int v6; // eax
  _DWORD v7[10]; // [esp+8h] [ebp-54h] BYREF
  unsigned int v8; // [esp+30h] [ebp-2Ch]
  float v9; // [esp+3Ch] [ebp-20h]
  char v10; // [esp+48h] [ebp-14h]
  int v11; // [esp+58h] [ebp-4h] BYREF

  sub_1001E4E0(v7, a2);
  if ( !*(_BYTE *)(this + 225) || (double)*(int *)(this + 852) > *(float *)(a2 + 52) )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)this + 244))(this, v7) )
  {
    *(_BYTE *)(this + 856) = 0;
    return 1;
  }
  if ( v8 == -1 || off_1061BE18[4 * (v8 & 0xFFF) + 2] != v8 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (v8 & 0xFFF) + 1];
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
  if ( *(_DWORD *)(this + 812) == 7 )
    return 0;
  v9 = sub_102073C0(v7, this + 800);
  v11 = *(_DWORD *)(this + 220);
  sub_100DC590(this, (int)v7);
  v5 = *(_DWORD *)(this + 220);
  sub_1002AB00((_DWORD *)(this + 220), &v11);
  v6 = sub_1001E870((_DWORD *)a2);
  if ( !sub_10149430((int *)this, v5, v6) )
    return 1;
  if ( *(_BYTE *)(this + 225) == 2 && (v10 & 8) == 0 )
    sub_10149810((_DWORD *)this);
  return 1;
}
