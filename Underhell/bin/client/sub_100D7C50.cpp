// bad sp value at call has been detected, the output may be wrong!
void __thiscall sub_100D7C50(float *this, float a2)
{
  double v2; // st6
  double v4; // st7
  int v5[3]; // [esp+10h] [ebp-Ch] BYREF
  float v6; // [esp+24h] [ebp+8h]

  v2 = a2;
  if ( *(_DWORD *)(dword_10432E64 + 48) )
  {
    if ( this[18] <= 0.0 )
      return;
    v4 = 0.0;
    if ( a2 > (double)this[18] )
      v2 = this[18];
    this[18] = this[18] - v2;
  }
  else
  {
    v4 = 0.0;
  }
  v6 = v2;
  if ( (dword_1043270C & 1) != 0 )
  {
    v2 = v2 * *(float *)(dword_1043275C + 44);
    v6 = v2;
  }
  if ( v2 > v4 )
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v5);
    sub_100D7410(this, v6, (int)v5);
    sub_100D7B40(this, v6, (float *)v5);
    sub_100D7580((float *)v5);
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, v5);
  }
}
