int __thiscall sub_100088A0(int *this, int *a2)
{
  int *v3; // ebx
  int v4; // edi
  int v5; // edi
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v11; // [esp+10h] [ebp-4h]
  int v12; // [esp+1Ch] [ebp+8h]

  v3 = this;
  v4 = this[3];
  v11 = v4;
  sub_100029E0(this, v4, a2[3], 0);
  v12 = 0;
  if ( a2[3] <= 0 )
    return v4;
  v5 = 0;
  v6 = 12 * v11;
  while ( 1 )
  {
    v7 = *a2;
    v8 = *v3;
    *(_DWORD *)(v8 + v6) = *(_DWORD *)(*a2 + v5);
    *(_DWORD *)(v8 + v6 + 4) = *(_DWORD *)(v7 + v5 + 4);
    *(_DWORD *)(v8 + v6 + 8) = *(_DWORD *)(v7 + v5 + 8);
    v5 += 12;
    v6 += 12;
    if ( ++v12 >= a2[3] )
      break;
    v3 = this;
  }
  return v11;
}
