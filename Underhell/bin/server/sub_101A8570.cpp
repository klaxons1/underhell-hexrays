void __thiscall sub_101A8570(int this, int a2)
{
  void (__thiscall *v3)(int, int *); // edx
  void (__thiscall *v4)(int, int *); // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // [esp+8h] [ebp-Ch] BYREF
  int v11; // [esp+Ch] [ebp-8h] BYREF
  float v12; // [esp+10h] [ebp-4h]

  if ( *(_DWORD *)a2 != 74 )
  {
    if ( *(_DWORD *)a2 != 75 )
    {
      if ( *(_DWORD *)a2 == 129 )
      {
        sub_100497D0((int *)this, (_DWORD *)a2);
        if ( sub_10023D10((_DWORD *)this, 10) )
        {
          if ( sub_10023D10((_DWORD *)this, 22) )
          {
            v3 = *(void (__thiscall **)(int, int *))(*(_DWORD *)this + 1264);
            v12 = *(float *)(a2 + 4);
            v11 = 75;
            v3(this, &v11);
          }
          if ( sub_10023D10((_DWORD *)this, 21) )
          {
            v4 = *(void (__thiscall **)(int, int *))(*(_DWORD *)this + 1264);
            v12 = *(float *)(a2 + 4);
            v11 = 74;
            v4(this, &v11);
          }
        }
      }
      else
      {
        sub_100497D0((int *)this, (_DWORD *)a2);
      }
      return;
    }
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    v6 = this;
    if ( v5 )
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      (*(void (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)v7 + 520))(v7, &v10, this + 580, 0);
      (*(void (__thiscall **)(_DWORD, int, int, float))(**(_DWORD **)(this + 3628) + 208))(
        *(_DWORD *)(this + 3628),
        v10,
        v11,
        COERCE_FLOAT(LODWORD(v12)));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 3628) + 192))(*(_DWORD *)(this + 3628));
      sub_10027CD0((_DWORD *)this, 0);
      return;
    }
LABEL_18:
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(v6, 6);
    return;
  }
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  v6 = this;
  if ( !v8 )
    goto LABEL_18;
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  (*(void (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)v9 + 520))(v9, &v10, this + 580, 0);
  (*(void (__thiscall **)(_DWORD, int, int, float))(**(_DWORD **)(this + 3628) + 204))(
    *(_DWORD *)(this + 3628),
    v10,
    v11,
    COERCE_FLOAT(LODWORD(v12)));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 3628) + 188))(*(_DWORD *)(this + 3628));
  sub_10027CD0((_DWORD *)this, 0);
}
