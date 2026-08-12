void __thiscall sub_10307570(int this)
{
  int v2; // eax
  float v3; // [esp+0h] [ebp-Ch]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v3, 0);
  if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1128) )
  {
    v2 = sub_100BDCE0(this, 1);
    sub_100C1170(this, v2);
    sub_100EC3F0((_DWORD *)this, (int)sub_10307340, 0.0, 0);
  }
}
