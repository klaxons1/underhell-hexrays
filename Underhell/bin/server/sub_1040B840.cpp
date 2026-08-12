void __thiscall sub_1040B840(int this, float *a2)
{
  float v3; // edx
  float v4; // eax
  int v5; // ecx
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  _DWORD *v9; // eax
  char *v10; // ecx
  float v11; // [esp+4h] [ebp-Ch] BYREF
  float v12; // [esp+8h] [ebp-8h]
  float v13; // [esp+Ch] [ebp-4h]

  if ( *(_BYTE *)(this + 1689) )
  {
    v3 = a2[1];
    v4 = a2[2];
    v11 = *a2;
    v12 = v3;
    v13 = v4;
    off_10689714();
    v5 = *(_DWORD *)(this + 424);
    v11 = v11 * 1000.0;
    v12 = 1000.0 * v12;
    v13 = -5000.0;
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v5 + 236))(v5, &v11);
  }
  v6 = *(_DWORD *)(this + 300);
  if ( v6 == -1 )
    goto LABEL_21;
  v7 = &off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1];
  v8 = v6 >> 12;
  if ( off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] != v8 || !*v7 )
    goto LABEL_21;
  v9 = off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v8 ? (_DWORD *)*v7 : 0;
  v10 = (char *)dword_106F0938;
  if ( v9[23] != dword_106F0938 )
  {
    if ( !dword_106F0938 )
      v10 = (char *)String;
    if ( !sub_100D6240(v9, v10) )
    {
LABEL_21:
      if ( !*(_BYTE *)(this + 1690) )
      {
        sub_101AB0C0(this);
        if ( (*(_BYTE *)(this + 1744) & 1) != 0 )
          sub_101AAE70("striderbuster_shotdown_trail", 1, this, -1, 0);
        else
          sub_101AAE70("striderbuster_flechette_attached", 1, this, -1, 0);
      }
      *(_BYTE *)(this + 1690) = 1;
    }
  }
  ++*(_DWORD *)(this + 1692);
}
