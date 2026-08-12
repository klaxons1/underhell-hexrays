int __thiscall sub_1024DBA0(int this, int a2)
{
  int v3; // ecx
  _DWORD *v4; // eax
  int result; // eax
  _DWORD *v6; // eax
  int v7; // [esp+3Ch] [ebp-1Ch]
  int v8; // [esp+3Ch] [ebp-1Ch]
  float v9; // [esp+44h] [ebp-14h]
  float v10; // [esp+44h] [ebp-14h]

  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(this + 328) + 1052))(*(_DWORD *)(this + 328), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(this + 332) + 1052))(*(_DWORD *)(this + 332), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(this + 340) + 1052))(*(_DWORD *)(this + 340), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(this + 336) + 1052))(*(_DWORD *)(this + 336), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 344) + 200))(*(_DWORD *)(this + 344), a2);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 328) + 244))(*(_DWORD *)(this + 328), 0, 0);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 332) + 244))(*(_DWORD *)(this + 332), 0, 0);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 336) + 244))(*(_DWORD *)(this + 336), 0, 0);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 340) + 244))(*(_DWORD *)(this + 340), 0, 0);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 344) + 244))(*(_DWORD *)(this + 344), 0, 0);
  v3 = *(_DWORD *)(this + 288);
  if ( (_BYTE)a2 )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 20))(v3, *(_DWORD *)(this + 270));
    if ( 0.0 == *(float *)(this + 368) )
    {
      result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 216))(this, *(_DWORD *)(this + 278));
    }
    else
    {
      v9 = *(float *)(this + 364);
      v7 = *(_DWORD *)(this + 278);
      v4 = (_DWORD *)sub_10248A20();
      result = sub_10247110(v4, (int (__thiscall ***)(_DWORD))this, "BgColor", v7, 0.0, v9, 0, 0.0);
    }
    if ( *(_BYTE *)(this + 355) )
      return (*(int (__thiscall **)(int))(*(_DWORD *)this + 940))(this);
  }
  else
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 20))(v3, *(_DWORD *)(this + 274));
    if ( 0.0 == *(float *)(this + 368) )
    {
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 216))(this, *(_DWORD *)(this + 282));
    }
    else
    {
      v10 = *(float *)(this + 364);
      v8 = *(_DWORD *)(this + 282);
      v6 = (_DWORD *)sub_10248A20();
      return sub_10247110(v6, (int (__thiscall ***)(_DWORD))this, "BgColor", v8, 0.0, v10, 0, 0.0);
    }
  }
  return result;
}
