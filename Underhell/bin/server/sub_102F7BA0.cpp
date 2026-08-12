void __thiscall sub_102F7BA0(int this, _DWORD *a2, int a3)
{
  int v4; // eax
  int v5; // eax
  _BYTE v6[64]; // [esp+8h] [ebp-40h] BYREF

  if ( !*(_BYTE *)(this + 5710) && !*(_BYTE *)(this + 2680) )
  {
    v4 = *(_DWORD *)(this + 2324);
    if ( v4 != 3 && v4 != 4 )
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1656))(this);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5)
        && !sub_102EBE70(this, 500.0)
        && !sub_10295590((_BYTE *)(this + 5144))
        && !sub_1004BD10((_DWORD **)(this + 5264))
        && (0.0 == *(float *)(this + 2744) || *(float *)(dword_106B31C8 + 12) - *(float *)(this + 2744) >= 2.0)
        && !sub_100697A0((_DWORD *)this, 51, 0)
        && *(float *)(this + 5716) <= (double)*(float *)(dword_106B31C8 + 12)
        && sub_102F3D00((void *)this, a2) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, const char *, _DWORD, _DWORD, _BYTE *, int))(*(_DWORD *)this + 2344))(
               this,
               "TLK_FLASHLIGHT_ILLUM",
               0,
               0,
               v6,
               64) )
        {
          *(_DWORD *)(this + 5724) = *sub_10162BE0(&a2, v6);
          sub_100B8E30((_BYTE *)(this + 2760));
          *(_BYTE *)(this + 5710) = 1;
          *(float *)(this + 5712) = *(float *)(dword_106B31C8 + 12) + 0.1;
        }
      }
    }
  }
}
