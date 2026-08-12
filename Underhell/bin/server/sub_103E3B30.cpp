void __thiscall sub_103E3B30(int this, float a2)
{
  double v3; // st7
  double v4; // st6
  float v5; // [esp+0h] [ebp-8h]

  v3 = 0.0;
  if ( 0.0 != *(float *)(this + 1212) )
  {
    v4 = *(float *)(this + 1212) * 10.0 * a2 + *(float *)(this + 1208);
    if ( v4 <= 2.0 )
    {
      if ( v4 < 0.0 )
        goto LABEL_5;
    }
    else
    {
      v4 = 2.0;
    }
    v3 = v4;
LABEL_5:
    *(float *)(this + 1208) = v3;
    v5 = v3;
    sub_10078870((_DWORD *)this, "armextensionpose", v5);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  }
}
