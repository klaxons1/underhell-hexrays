char __thiscall sub_100D9BB0(int this, float a2)
{
  char result; // al
  double v4; // st1
  double v5; // rt1
  double v6; // st1
  double v7; // st2
  double v8; // st3
  double v9; // st4
  double v10; // st5
  int v11[3]; // [esp+10h] [ebp-3Ch] BYREF
  int v12[3]; // [esp+1Ch] [ebp-30h] BYREF
  int v13[3]; // [esp+28h] [ebp-24h] BYREF
  float v14[3]; // [esp+34h] [ebp-18h] BYREF
  float v15; // [esp+40h] [ebp-Ch] BYREF
  float v16; // [esp+44h] [ebp-8h]
  float v17; // [esp+48h] [ebp-4h]

  if ( *(_DWORD *)(this + 24) )
  {
    sub_1011BBD0(this, 255, 100, 0, 0, a2);
    result = *(_BYTE *)(this + 356) >> 7;
    if ( *(char *)(this + 356) < 0 )
    {
      (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)(this + 320) + 12))(this + 320, v14, &v15);
      v4 = (v14[0] + v15) * 0.5;
      *(float *)v11 = v4;
      v5 = v4;
      v6 = (v14[1] + v16) * 0.5;
      *(float *)&v11[1] = v6;
      v7 = 0.5 * (v14[2] + v17);
      *(float *)&v11[2] = v7;
      v8 = v15 - v5;
      *(float *)v13 = v8;
      v9 = v16 - v6;
      *(float *)&v13[1] = v9;
      v10 = v17 - v7;
      *(float *)&v13[2] = v10;
      *(float *)v12 = -v8;
      *(float *)&v12[1] = -v9;
      *(float *)&v12[2] = -v10;
      return sub_1011BB20((int)v11, (int)v12, (int)v13, 0, 255, 255, 0, a2);
    }
  }
  return result;
}
