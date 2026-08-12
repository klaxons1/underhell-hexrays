char __thiscall sub_10319FB0(int this, int a2, float *a3, float *a4)
{
  void (__noreturn ***v5)(); // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  double v11; // st7
  float v12; // [esp+10h] [ebp-14h]
  BOOL v13; // [esp+14h] [ebp-10h]
  float v14; // [esp+14h] [ebp-10h]

  v5 = sub_1023DBA0();
  if ( 1.0 != ((double (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v5)[15])(v5, *(_DWORD *)(this + 4280)) )
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v5)[12])(
      v5,
      *(_DWORD *)(this + 4280),
      1.0,
      0.0099999998);
  if ( *(_DWORD *)(this + 4120) == 4 && *(_DWORD *)(this + 4212) == 4 )
  {
    v13 = *(_DWORD *)(this + 4088) == 0;
LABEL_16:
    sub_103133F0((int *)this, (float *)a2, a3, (float *)v13);
    goto LABEL_17;
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6) )
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1096))(v7) )
      {
        sub_10314D90((int *)this, (float *)a2, a4);
        goto LABEL_17;
      }
    }
  }
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
    || (v8 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this),
        !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 320))(v8)) )
  {
    v13 = 0;
    goto LABEL_16;
  }
  if ( sub_103142C0((_BYTE *)this) )
    sub_103133F0((int *)this, (float *)a2, a3, (float *)1);
  else
    sub_10314680((int *)this, v5, (float *)a2, a3);
LABEL_17:
  if ( *(_DWORD *)(this + 4120) == 4 )
  {
    if ( --*(_DWORD *)(this + 4088) < 0 )
    {
      *(_DWORD *)(this + 4088) = 4;
      return 1;
    }
  }
  else if ( (int)--*(_DWORD *)(this + 4088) <= 0 )
  {
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v5)[12])(
      v5,
      *(_DWORD *)(this + 4280),
      0.0,
      0.0099999998);
    v11 = *(float *)(dword_106E39BC + 44);
    v14 = 0.1 * v11 + v11;
    v12 = v11 - 0.1 * v11;
    *(float *)&a2 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                      dword_106B31E4,
                      LODWORD(v12),
                      LODWORD(v14))
                  + *(float *)(this + 4084)
                  + *(float *)(dword_106B31C8 + 12);
    sub_1002ABA0((float *)(this + 1672), (float *)&a2);
    *(_DWORD *)(this + 4076) = 0;
    *(_DWORD *)(this + 3776) = 0;
  }
  return 1;
}
