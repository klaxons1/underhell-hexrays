int __thiscall sub_102CBA20(float *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // eax
  int v4; // esi
  int (__thiscall *v5)(float *, _BYTE *, float *, int, _DWORD); // eax
  double v6; // st7
  double v7; // st6
  int v8; // eax
  int v10; // [esp-8h] [ebp-28h]
  _BYTE v11[12]; // [esp+8h] [ebp-18h] BYREF
  float v12; // [esp+14h] [ebp-Ch] BYREF
  float v13; // [esp+18h] [ebp-8h]
  float v14; // [esp+1Ch] [ebp-4h]

  sub_10422220(this + 182, &v12);
  v2 = *((_DWORD *)this + 75);
  if ( v2 == -1 || off_1061BE18[4 * ((_DWORD)this[75] & 0xFFF) + 2] != v2 >> 12 )
    v3 = 0;
  else
    v3 = (_DWORD *)off_1061BE18[4 * ((_DWORD)this[75] & 0xFFF) + 1];
  sub_102608F0(this + 209, v3, *((unsigned __int8 *)this + 305));
  v4 = *(_DWORD *)this;
  v10 = *((_DWORD *)this + 356);
  v5 = *(int (__thiscall **)(float *, _BYTE *, float *, int, _DWORD))(*(_DWORD *)this + 744);
  v6 = v14 * this[219] + v13 * this[218] + v12 * this[217];
  v7 = this[213] * v12 + this[214] * v13 + this[215] * v14;
  v12 = this[211] * v14 + this[210] * v13 + v12 * this[209];
  v13 = v7;
  v14 = v6;
  v8 = v5(this, v11, &v12, v10, 0);
  return (*(int (__thiscall **)(float *, int, int))(v4 + 752))(this, 1, v8);
}
