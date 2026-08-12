int __thiscall sub_10378640(float *this)
{
  int v2; // edi
  int v3; // edx
  unsigned int v4; // eax
  int v5; // eax
  int v6; // eax
  float v8; // [esp+14h] [ebp-74h]
  float v9; // [esp+18h] [ebp-70h]
  _BYTE v10[80]; // [esp+28h] [ebp-60h] BYREF
  float v11[3]; // [esp+78h] [ebp-10h] BYREF
  float v12; // [esp+84h] [ebp-4h]

  sub_10112C00((int)(this + 80), 0);
  if ( *((_BYTE *)this + 225) )
  {
    (*(void (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 480))(this, (_BYTE *)this + 225);
    *((_BYTE *)this + 225) = 0;
  }
  sub_1023C380(this, (int)"NPC_Hunter.FlechetteExplode", 0.0, 0);
  sub_100BD6D0(this, dword_10674270, (int)v11, 0, 0, 0);
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_101AB000("hunter_projectile_explosion_1", v11[0], v11[1], v11[2], this[176], this[177], this[178], 0);
  v2 = 0x4000000;
  if ( (++dword_106E9614 & 1) != 0 && *(_DWORD *)(dword_106E8B14 + 48) )
    v2 = 67110912;
  v3 = *((_DWORD *)this + 63) >> 11;
  v12 = *(float *)(dword_106E87FC + 44);
  if ( (v3 & 1) != 0 )
    sub_100DAE60((int)this);
  v4 = *((_DWORD *)this + 103);
  if ( v4 == -1 || off_1061BE18[4 * ((_DWORD)this[103] & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * ((_DWORD)this[103] & 0xFFF) + 1];
  v8 = v12;
  v6 = sub_10248110((int)v10, (int)this, v5, *(float *)(dword_106E87B4 + 44), v2, 0);
  sub_100C9F20(v6, (int)(this + 145), v8, 0, 0);
  sub_100EAB80(this, 32);
  sub_100EC3F0(this, (int)sub_10246D70, 0.0, 0);
  v9 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0((int *)this, v9, 0);
}
