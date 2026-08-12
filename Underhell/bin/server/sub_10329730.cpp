void __thiscall sub_10329730(int *this, int a2)
{
  int v3; // ecx
  double v4; // st7
  double v5; // st6
  float v6; // [esp+8h] [ebp-64h]
  _DWORD v7[10]; // [esp+10h] [ebp-5Ch] BYREF
  int v8; // [esp+38h] [ebp-34h]
  int v9; // [esp+3Ch] [ebp-30h]
  float v10; // [esp+44h] [ebp-28h]
  int v11; // [esp+50h] [ebp-1Ch]
  float v12; // [esp+60h] [ebp-Ch] BYREF
  float v13; // [esp+64h] [ebp-8h]
  float v14; // [esp+68h] [ebp-4h]

  sub_10247EC0(v7);
  v11 = 0;
  if ( this )
    v8 = *(_DWORD *)(*(int (__thiscall **)(int *))(*this + 8))(this);
  else
    v8 = -1;
  if ( a2 )
    v9 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    v9 = -1;
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v3 = this[106];
  *(float *)&v7[4] = *((float *)this + 145);
  *(float *)&v7[5] = *((float *)this + 146);
  *(float *)&v7[6] = *((float *)this + 147);
  *(float *)&v7[1] = 1.0;
  *(float *)&v7[2] = 1.0;
  *(float *)&v7[3] = 1.0;
  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v3 + 204))(v3, &v12, 0);
  v6 = v13 * v13 + v12 * v12 + v14 * v14;
  v4 = off_10689708(v6) * 0.004;
  v5 = 2.0;
  if ( v4 > 2.0 || (v5 = 0.0, v4 < 0.0) )
    v4 = v5;
  v10 = v4 * (double)this[54];
  sub_100D9E70(this, (int)this, v7);
}
