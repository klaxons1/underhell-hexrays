void __thiscall sub_10259220(int this, unsigned int a2)
{
  float v3; // [esp+0h] [ebp-10h]

  sub_102587A0((_DWORD *)this, a2);
  if ( (*(unsigned __int8 (__thiscall **)(unsigned int))(*(_DWORD *)a2 + 320))(a2) )
  {
    if ( 0.0 != *(float *)(this + 1136) )
    {
      *(_BYTE *)(this + 1140) = 0;
      *(_DWORD *)(this + 1144) = *(_DWORD *)(*(int (__thiscall **)(unsigned int))(*(_DWORD *)a2 + 8))(a2);
      sub_100EC3F0((_DWORD *)this, (int)sub_10257100, 0.0, 0);
      v3 = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 1136);
      sub_100EC4A0((int *)this, v3, 0);
    }
  }
}
