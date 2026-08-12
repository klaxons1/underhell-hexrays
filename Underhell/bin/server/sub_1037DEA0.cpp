void __usercall sub_1037DEA0(int a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // eax
  double v6; // st7
  int v7; // edx

  *(_BYTE *)(a1 + 244) = 1;
  sub_1037BBE0(a2);
  sub_10053A00(a1);
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 368))(*(_DWORD *)(a1 + 4)) )
  {
    v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 368))(*(_DWORD *)(a1 + 4));
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
    {
      if ( sub_10023D10(*(_DWORD **)(a1 + 4), 10) )
      {
        v4 = *(_DWORD **)(a1 + 4);
        if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(v4[699] + 80) )
        {
          v5 = (*(int (__thiscall **)(_DWORD *))(*v4 + 368))(v4);
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 1088))(v5) )
          {
            v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                   dword_106B31E4,
                   15.0,
                   25.0)
               + *(float *)(dword_106B31C8 + 12);
            v7 = *(_DWORD *)(a1 + 4);
            *(float *)(a1 + 236) = v6;
            *(float *)(*(_DWORD *)(v7 + 2796) + 80) = v6 + 1.0;
          }
        }
      }
    }
  }
}
