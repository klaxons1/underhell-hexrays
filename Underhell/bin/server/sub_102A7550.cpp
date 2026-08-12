void __thiscall sub_102A7550(float *this, _DWORD *a2)
{
  void (__thiscall *v3)(float *, _DWORD); // edx
  int v4[3]; // [esp+Ch] [ebp-Ch] BYREF

  switch ( *a2 )
  {
    case 0x4C:
      if ( *(_BYTE *)(*((_DWORD *)this + 1) + 896) )
        (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      break;
    case 0x186A5:
      sub_102A71D0(this, (float *)v4);
      sub_10078690(*(_DWORD *)(*((_DWORD *)this + 1) + 2604), (int)v4, 0.0, 0.0);
      if ( (*(_BYTE *)(*((_DWORD *)this + 1) + 256) & 1) != 0 )
      {
        v3 = *(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 12);
        this[37] = *(float *)(dword_106B31C8 + 12) + 2.0;
        v3(this, 0);
      }
      break;
    case 0x186A6:
      if ( *(_BYTE *)(*((_DWORD *)this + 1) + 896) )
      {
        this[4] = 0.0;
        sub_102A0280((int)this);
        (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      }
      break;
    default:
      sub_102A19A0((int)this, a2);
      break;
  }
}
