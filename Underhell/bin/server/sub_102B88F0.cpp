void __thiscall sub_102B88F0(int this, int a2)
{
  bool v3; // zf
  float v4[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( !*(_BYTE *)(this + 1178) && (*(_BYTE *)(a2 + 356) & 8) == 0 )
  {
    if ( *(_DWORD *)(a2 + 420) == 1 )
    {
      if ( !*(_DWORD *)(dword_10698344 + 48) )
        return;
      (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(this + 424) + 204))(
        *(_DWORD *)(this + 424),
        v4,
        0);
      v3 = !sub_10018CD0(v4, &flt_106F1CA8);
    }
    else
    {
      if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 1172) )
      {
LABEL_9:
        sub_102B8270(this);
        return;
      }
      v3 = (*(int (**)(void))(*(_DWORD *)a2 + 288))() == 0;
    }
    if ( v3 )
      return;
    goto LABEL_9;
  }
}
