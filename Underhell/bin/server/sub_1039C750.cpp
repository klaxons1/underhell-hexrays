void __thiscall sub_1039C750(_DWORD *this, char a2, float a3, _DWORD *a4)
{
  int i; // ebx
  __int16 v6; // dx
  double v7; // st7
  int v8; // edx
  int (__thiscall *v9)(_DWORD *); // eax
  int v10; // eax
  int v11; // edi
  char String1[8]; // [esp+30h] [ebp-5Ch] BYREF
  __int16 v13; // [esp+38h] [ebp-54h]
  int v14[3]; // [esp+70h] [ebp-1Ch] BYREF
  int v15[3]; // [esp+7Ch] [ebp-10h] BYREF
  float v16; // [esp+88h] [ebp-4h]

  if ( sub_100BF4B0((int)this, 5) )
  {
    sub_100C1600((int)this, 5, 0);
    ++this[961];
  }
  for ( i = 0; i < 3; ++i )
  {
    if ( !*((_BYTE *)this + i + 3848) )
      continue;
    if ( i )
    {
      if ( i == 1 )
      {
        v6 = 51;
      }
      else
      {
        if ( i != 2 )
          goto LABEL_12;
        v6 = 52;
      }
    }
    else
    {
      v6 = 50;
    }
    qmemcpy(String1, "headcrab", sizeof(String1));
    v13 = v6;
LABEL_12:
    sub_100BEFA0(this, String1, (int)v14, (int)v15);
    v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           360.0);
    v8 = *this;
    *(float *)v15 = 0.0;
    *(float *)&v15[2] = 0.0;
    v9 = *(int (__thiscall **)(_DWORD *))(v8 + 2332);
    *(float *)&v15[1] = v7;
    v10 = v9(this);
    v11 = sub_100E2680(v10, (float *)v14, (float *)v15, (int)this);
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 96))(v11);
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 2280))(this, v11) )
    {
      v16 = 2.0;
      if ( a2 && a3 > 10.0 )
        v16 = a3 * 0.1;
      if ( (this[64] & 0x8000000) != 0 )
        (*(void (__thiscall **)(int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v11 + 808))(v11, 100.0, 1, 0.0, 0);
      sub_1036D900(v11, (int)v15, v16, a4);
      if ( (unsigned int)i <= 2 )
      {
        if ( *((_BYTE *)this + i + 3848) )
          --this[961];
        *((_BYTE *)this + i + 3848) = 0;
        sub_100C1600((int)this, i + 2, 0);
      }
    }
    else
    {
      sub_1025FAC0(v11);
    }
  }
}
