void __thiscall sub_102DE250(int this)
{
  float *v2; // edi
  float v3; // [esp+8h] [ebp-4h] BYREF

  v2 = (float *)sub_101E7EA0((_DWORD *)this, 0);
  if ( !v2 || (*(int (__thiscall **)(float *))(*(_DWORD *)v2 + 868))(v2) )
  {
    *(float *)(this + 5600) = 0.0;
  }
  else if ( 0.0 != *(float *)(this + 5600) )
  {
    if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 5600) )
    {
      if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 5600) )
      {
        *(float *)(this + 5600) = 0.0;
        (*(void (__thiscall **)(float *, _DWORD, _DWORD))(*(_DWORD *)v2 + 840))(v2, 0, 0);
      }
    }
    else
    {
      v3 = 1.0;
      sub_10045790(v2 + 216, &v3);
      (*(void (__thiscall **)(float *))(*(_DWORD *)v2 + 728))(v2);
    }
  }
}
