int __thiscall sub_102471C0(int this)
{
  float *v2; // edi
  int *v3; // ecx
  float *v4; // ecx
  char *v5; // eax
  int *v6; // ecx
  const char *v7; // eax
  char *v8; // eax
  const char *v9; // eax
  char *v10; // eax
  const char *v11; // eax
  int v12; // ebx
  int *v13; // ecx
  const char *v14; // eax
  int result; // eax
  int v16; // edi
  int *v17; // ecx
  char Destination[260]; // [esp+14h] [ebp-114h] BYREF
  float v19; // [esp+118h] [ebp-10h] BYREF
  float v20; // [esp+11Ch] [ebp-Ch]
  float v21; // [esp+120h] [ebp-8h]
  int v22; // [esp+124h] [ebp-4h] BYREF

  sub_100E38F0((float *)this);
  if ( *(_DWORD *)(this + 820) )
  {
    v2 = (float *)(this + 800);
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 800);
    }
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_10181110((float *)(this + 704), *(float *)(this + 828), *(float *)(this + 824), (float *)(this + 800));
    v19 = -*v2;
    v4 = (float *)(this + 800);
    v20 = -*(float *)(this + 804);
    v21 = -*(float *)(this + 808);
LABEL_17:
    sub_10235B40(v4, &v19);
    goto LABEL_18;
  }
  v5 = *(char **)(this + 212);
  if ( !v5 )
    v5 = (char *)String;
  v2 = (float *)sub_1012BF20(&dword_1069E3E0, 0, v5, 0, 0, 0, 0);
  if ( v2 )
  {
    if ( ((_DWORD)v2[63] & 0x800) != 0 )
      sub_100DAE60((int)v2);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v19 = *(float *)(this + 580) - v2[145];
    v20 = *(float *)(this + 584) - v2[146];
    v21 = *(float *)(this + 588) - v2[147];
    off_10689714();
    v4 = (float *)(this + 800);
    goto LABEL_17;
  }
LABEL_18:
  if ( *(_DWORD *)(this + 836) == -1 && *(_DWORD *)(this + 836) != *(_DWORD *)(this + 832) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 836);
    }
    *(_DWORD *)(this + 836) = *(_DWORD *)(this + 832);
  }
  if ( *(_DWORD *)(this + 812) )
  {
    v7 = *(const char **)(this + 812);
    if ( !v7 )
      v7 = String;
    if ( !sub_10429940(v7) )
    {
      v8 = *(char **)(this + 812);
      if ( !v8 )
        v8 = (char *)String;
      sub_104299C0(Destination, v8, 0x104u);
      sub_10429750((int)Destination, ".vmt", 260, -1);
      *(_DWORD *)(this + 812) = *sub_10162BE0(&v22, Destination);
    }
  }
  else
  {
    *(_DWORD *)(this + 812) = *sub_10162BE0(&v22, "sprites/light_glow02_add_noz.vmt");
  }
  if ( *(_DWORD *)(this + 816) )
  {
    v9 = *(const char **)(this + 816);
    if ( !v9 )
      v9 = String;
    if ( !sub_10429940(v9) )
    {
      v10 = *(char **)(this + 816);
      if ( !v10 )
        v10 = (char *)String;
      sub_104299C0(Destination, v10, 0x104u);
      sub_10429750((int)Destination, ".vmt", 260, -1);
      *(_DWORD *)(this + 816) = *sub_10162BE0(&v22, Destination);
    }
  }
  else
  {
    *(_DWORD *)(this + 816) = *sub_10162BE0(&v22, "sprites/light_glow02_add_noz.vmt");
  }
  v11 = *(const char **)(this + 812);
  if ( !v11 )
    v11 = String;
  v12 = sub_100E8220((int)v2, v11);
  if ( *(_DWORD *)(this + 848) != v12 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v13 = *(int **)(this + 24);
      if ( v13 )
        sub_100194B0(v13, 848);
    }
    *(_DWORD *)(this + 848) = v12;
  }
  v14 = *(const char **)(this + 816);
  if ( !v14 )
    v14 = String;
  result = sub_100E8220((int)v2, v14);
  v16 = result;
  if ( *(_DWORD *)(this + 852) != result )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 852) = v16;
    }
    else
    {
      v17 = *(int **)(this + 24);
      if ( v17 )
        result = sub_100194B0(v17, 852);
      *(_DWORD *)(this + 852) = v16;
    }
  }
  return result;
}
