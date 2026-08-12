int __thiscall sub_1008D6A0(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // esi
  int v6; // ebx
  void *v7; // edi
  float *v8; // eax
  float v10; // [esp+0h] [ebp-28h]
  float v11[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v4 = this[5];
  if ( a3 < 0 || a3 >= *(_DWORD *)(v4 + 4) )
  {
    ++dword_10691DE0;
    v5 = 0;
  }
  else
  {
    v5 = *(_DWORD *)(*(_DWORD *)(v4 + 8) + 4 * a3);
  }
  if ( *(_DWORD *)(v5 + 60) == 3 )
  {
    v6 = 2;
  }
  else if ( *(_DWORD *)(v5 + 60) == 4 )
  {
    v6 = 3;
  }
  else
  {
    v6 = 0;
  }
  v7 = (void *)sub_1042FCC0(48);
  if ( !v7 )
    return 0;
  v10 = *(float *)(v5 + 56);
  v8 = sub_1008D160(v5, v11, a2);
  return sub_100B9A20(v7, (int)v8, v10, v6, a4 | 4, a3);
}
