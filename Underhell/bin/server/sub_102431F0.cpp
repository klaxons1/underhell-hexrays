void __thiscall sub_102431F0(int this)
{
  float v2; // edx
  int v3; // eax
  int v4; // [esp+4h] [ebp-10h] BYREF
  float v5; // [esp+8h] [ebp-Ch]
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v2 = *(float *)(this + 708);
  v3 = *(_DWORD *)(this + 712);
  v4 = *(_DWORD *)(this + 704);
  v5 = v2;
  v6 = v3;
  sub_10242E10((_BYTE *)this);
  v7 = (unsigned __int16)(int)((v5 + 180.0) * 182.04445);
  v5 = (double)v7 * 0.0054931641;
  sub_100E0EA0(this, (float *)&v4);
}
