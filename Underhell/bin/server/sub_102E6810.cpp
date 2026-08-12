int __thiscall sub_102E6810(_DWORD *this)
{
  _DWORD *v1; // esi
  _DWORD *v2; // ebx
  char *v3; // eax
  int *v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // edi
  float v12; // [esp+0h] [ebp-1Ch]
  int v13; // [esp+14h] [ebp-8h]

  v1 = this;
  sub_10255CE0((int)this);
  v2 = 0;
  while ( 1 )
  {
    v3 = (char *)v1[301];
    if ( !v3 )
      v3 = (char *)String;
    v2 = sub_1012BF20(&dword_1069E3E0, (int)v2, v3, 0, 0, 0, 0);
    if ( !v2 )
      break;
    v4 = (int *)(*(int (__thiscall **)(_DWORD *))(*v2 + 8))(v2);
    v5 = v1[299];
    v13 = *v4;
    v6 = v1[297];
    if ( v5 + 1 > v6 )
      sub_102ABFC0(v1 + 296, v5 - v6 + 1);
    ++v1[299];
    v7 = v1[296];
    v8 = v1[299] - v5 - 1;
    v1[300] = v7;
    if ( v8 > 0 )
      memcpy((void *)(v7 + 4 * v5 + 4), (const void *)(v7 + 4 * v5), 4 * v8);
    v9 = v1[296];
    v1 = this;
    v10 = (_DWORD *)(v9 + 4 * v5);
    if ( v10 )
      *v10 = v13;
  }
  v12 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC3F0(v1, (int)sub_102E62E0, v12, off_106677D8);
}
