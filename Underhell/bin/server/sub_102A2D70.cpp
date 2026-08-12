void __thiscall sub_102A2D70(_DWORD *this, _DWORD *a2)
{
  float *v3; // eax
  double v4; // st6
  double v5; // st5
  int v6; // eax
  float v7[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( *a2 == 100007 || *a2 == 100010 )
  {
    if ( !*(_BYTE *)(this[1] + 896) )
      return;
    goto LABEL_13;
  }
  if ( *a2 != 100011 )
  {
    sub_102A19A0((int)this, a2);
    return;
  }
  if ( !sub_102A2C40((int)this) )
  {
    (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)this[1] + 1312))(
      this[1],
      "Unable to find entrance to vehicle");
    return;
  }
  if ( !sub_1007E040(*(_DWORD **)(this[1] + 2588)) )
  {
    sub_1029F780(this, this[28], v7, 0);
    v3 = (float *)sub_1004BF30(this);
    v4 = v7[1] - v3[1];
    v5 = v7[0] - *v3;
    if ( v5 * v5 + v4 * v4 >= 1296.0 )
    {
      (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)this[1] + 1312))(
        this[1],
        "Unable to navigate to vehicle");
      return;
    }
    if ( sub_1007DF30(*(_DWORD **)(this[1] + 2588)) != -1 )
    {
      v6 = sub_1007DF30(*(_DWORD **)(this[1] + 2588));
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[1] + 1416))(this[1], v6);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 12))(this, 0);
      return;
    }
LABEL_13:
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 12))(this, 0);
  }
}
