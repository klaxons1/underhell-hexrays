void __thiscall sub_103009D0(unsigned int *this, int a2, float *a3, int a4)
{
  float v5; // ecx
  float v6; // edx
  unsigned int v7; // eax
  double v8; // st7
  unsigned int v9; // eax
  double v10; // st7
  double v11; // st7
  int v12[13]; // [esp+8h] [ebp-68h] BYREF
  float v13; // [esp+3Ch] [ebp-34h]
  int v14; // [esp+48h] [ebp-28h]
  float v15; // [esp+58h] [ebp-18h] BYREF
  float v16; // [esp+5Ch] [ebp-14h]
  float v17; // [esp+60h] [ebp-10h]
  float v18; // [esp+64h] [ebp-Ch]
  float v19; // [esp+68h] [ebp-8h]
  int v20; // [esp+6Ch] [ebp-4h]

  sub_1001E4E0(v12, a2);
  v5 = *a3;
  v6 = a3[1];
  v20 = *((_DWORD *)a3 + 2);
  v7 = this[593];
  v18 = v5;
  v19 = v6;
  if ( v7 == dword_106E2970 || v7 == dword_106E296C )
  {
    if ( (v14 & 0x800001) != 0 )
    {
      (*(void (__thiscall **)(unsigned int *, int *))(*this + 1624))(this, v12);
      v8 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 500, 1000);
      v15 = v18 * v8;
      v16 = v19 * v8;
      v17 = v8 * 0.0 + 64.0;
      sub_10300780((int)this, &v15);
      sub_100EA150((int)this, &v15);
      sub_101C73D0(this, 0);
    }
    v13 = v13 * 4.0;
  }
  else if ( (v14 & 0x800000) != 0 || (v14 & 0x41) != 0 && v13 >= 25.0 )
  {
    if ( !this[629]
      || (v9 = this[672], v9 == -1)
      || off_1061BE18[4 * (this[672] & 0xFFF) + 2] != v9 >> 12
      || !off_1061BE18[4 * (this[672] & 0xFFF) + 1] )
    {
      if ( *(_DWORD *)(dword_10698344 + 48) )
      {
        (*(void (__thiscall **)(unsigned int *, int *))(*this + 1624))(this, v12);
        if ( (this[64] & 1) != 0 )
          sub_10023CB0((char *)this, 73);
        v10 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 500, 1000);
        v15 = v18 * v10;
        v16 = v19 * v10;
        v17 = v10 * 0.0 + 64.0;
        sub_10300780((int)this, &v15);
        sub_100EA150((int)this, &v15);
      }
      else
      {
        if ( (this[64] & 1) == 0 )
          goto LABEL_20;
        (*(void (__thiscall **)(unsigned int *, int *))(*this + 1624))(this, v12);
        sub_10023CB0((char *)this, 73);
        v11 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 500, 1000);
        v15 = v18 * v11;
        v16 = v19 * v11;
        v17 = v11 * 0.0 + 64.0;
        sub_100EA150((int)this, &v15);
      }
      sub_101C73D0(this, 0);
    }
  }
LABEL_20:
  sub_100360A0(this, (int)v12, (int)a3, a4);
}
