int __thiscall sub_10179A10(int this)
{
  unsigned int v2; // eax
  int *v3; // edx
  int *v4; // ecx
  const char *v5; // eax
  char *v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  int v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // edi
  double v19; // st7
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // eax
  int v25; // [esp-4h] [ebp-F8h]
  float v26; // [esp+0h] [ebp-F4h]
  _BYTE v27[48]; // [esp+10h] [ebp-E4h] BYREF
  _BYTE v28[48]; // [esp+40h] [ebp-B4h] BYREF
  _BYTE v29[48]; // [esp+70h] [ebp-84h] BYREF
  _BYTE v30[48]; // [esp+A0h] [ebp-54h] BYREF
  float v31[3]; // [esp+D0h] [ebp-24h] BYREF
  float v32[3]; // [esp+DCh] [ebp-18h] BYREF
  float v33; // [esp+E8h] [ebp-Ch] BYREF
  float v34; // [esp+ECh] [ebp-8h]
  float v35; // [esp+F0h] [ebp-4h]

  v2 = *(_DWORD *)(this + 812);
  if ( v2 == -1
    || (v3 = off_1061BE18, v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 1], v4[1] != v2 >> 12)
    || !*v4 )
  {
    v5 = *(const char **)(this + 800);
    if ( !v5 )
      v5 = String;
    if ( !sub_104292D0(v5, "!player", 8) )
    {
      v6 = *(char **)(this + 800);
      if ( !v6 )
        v6 = (char *)String;
      sub_101797B0((_DWORD *)this, v6);
    }
    v3 = off_1061BE18;
  }
  v7 = *(_DWORD *)(this + 812);
  if ( v7 != -1 && v3[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 2] == v7 >> 12 )
  {
    if ( v3[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 1] )
    {
      v8 = *(_DWORD *)(this + 816);
      if ( v8 != -1 && v3[4 * (*(_DWORD *)(this + 816) & 0xFFF) + 2] == v8 >> 12 )
      {
        if ( v3[4 * (*(_DWORD *)(this + 816) & 0xFFF) + 1] )
        {
          v9 = *(_DWORD *)(this + 820);
          if ( v9 != -1 && v3[4 * (*(_DWORD *)(this + 820) & 0xFFF) + 2] == v9 >> 12 )
          {
            if ( v3[4 * (*(_DWORD *)(this + 820) & 0xFFF) + 1] )
            {
              v10 = *(_DWORD *)(this + 824);
              if ( v10 != -1
                && v3[4 * (*(_DWORD *)(this + 824) & 0xFFF) + 2] == v10 >> 12
                && v3[4 * (*(_DWORD *)(this + 824) & 0xFFF) + 1] )
              {
                v11 = *(_DWORD *)(this + 832);
                if ( v11 )
                {
                  if ( v11 == 1 )
                  {
                    v12 = sub_1026A890(this + 812);
                    v13 = sub_1026A890(this + 812);
                    v25 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v12 + 504))(v12, &v33);
                    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 508))(v13);
                    sub_10425070(v14, v25, v28);
                  }
                }
                else
                {
                  v15 = (_DWORD *)sub_1026A890(this + 812);
                  v16 = sub_100BCD00(v15);
                  sub_10424F80(v16, v28);
                }
                v17 = sub_1026A890(this + 816);
                v18 = v17;
                if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
                  sub_100DAE60(v17);
                sub_10421E30(v28, v18 + 500, v30);
                if ( 0.0 != *(float *)(this + 828) && 1.0 != *(float *)(this + 828) )
                {
                  sub_10421CE0(v30, 3, &v33);
                  v19 = 1.0 / *(float *)(this + 828);
                  v33 = v33 * v19;
                  v34 = v34 * v19;
                  v35 = v19 * v35;
                  sub_10421D00(&v33, 3, v30);
                }
                sub_10424F80(v30, v27);
                v20 = sub_1026A890(this + 824);
                v21 = v20;
                if ( (*(_DWORD *)(v20 + 252) & 0x800) != 0 )
                  sub_100DAE60(v20);
                sub_10421E30(v21 + 500, v27, v29);
                sub_10421A90(v29, v31);
                sub_10421CE0(v29, 3, v32);
                v22 = sub_1026A890(this + 820);
                sub_100E0D20(v22, v32);
                v23 = sub_1026A890(this + 820);
                sub_100E0EA0(v23, v31);
              }
            }
          }
        }
      }
    }
  }
  v26 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0((int *)this, v26, 0);
}
