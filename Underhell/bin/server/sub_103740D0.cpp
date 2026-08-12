int __thiscall sub_103740D0(char *this, int a2, int a3, float *a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  double v8; // st7
  int v9; // ebx
  int *v10; // eax
  int v12; // [esp-4h] [ebp-6Ch]
  int v13[11]; // [esp+Ch] [ebp-5Ch] BYREF
  unsigned int v14; // [esp+38h] [ebp-30h]
  float v15; // [esp+40h] [ebp-28h]
  int v16; // [esp+4Ch] [ebp-1Ch]
  int v17; // [esp+58h] [ebp-10h]
  float v18[3]; // [esp+5Ch] [ebp-Ch] BYREF

  sub_1001E4E0(v13, a2);
  if ( v14 == -1 || off_1061BE18[4 * (v14 & 0xFFF) + 2] != v14 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (v14 & 0xFFF) + 1];
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) && (this[2716] & 1) == 0 )
  {
    if ( v14 == -1 || off_1061BE18[4 * (v14 & 0xFFF) + 2] != v14 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (v14 & 0xFFF) + 1];
    v12 = v6;
    v7 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 1868))(this);
    sub_100780E0(v7, v12);
    *((_DWORD *)this + 679) |= 1u;
    sub_10023CB0(this, 17);
  }
  if ( (v16 & 2) != 0 || (v16 & 0x20001000) != 0 || (v16 & 0x80u) != 0 )
  {
    v8 = 1.0;
    if ( (v16 & 0x20000000) != 0 )
    {
      v8 = *(float *)(dword_106E8BEC + 44);
    }
    else if ( (v16 & 2) != 0 || (v16 & 0x1000) != 0 )
    {
      v9 = v17;
      v10 = sub_102D9B20();
      if ( v9 == sub_100B9D10(v10, "357") )
        v8 = 1.16;
      else
        v8 = *(float *)(dword_106E8B5C + 44);
    }
    if ( *((_DWORD *)this + 593) == dword_106E84CC )
      v8 = v8 * *(float *)(dword_106E8BA4 + 44);
    if ( 0.0 != v8 )
      v15 = v8 * v15;
    sub_10422540(a4 + 6, v18);
    sub_101AB000("blood_impact_synth_01", a4[3], a4[4], a4[5], v18[0], v18[1], v18[2], 0);
    sub_101AAE70("blood_impact_synth_01_arc_parent", 4, (int)this, dword_10674300, 0);
  }
  return sub_1001EB60(this, v13, a3, (int)a4);
}
