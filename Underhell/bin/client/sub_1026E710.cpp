void __thiscall sub_1026E710(int this)
{
  int v2; // eax
  int v3; // [esp+10h] [ebp-10h] BYREF
  int v4; // [esp+14h] [ebp-Ch] BYREF
  int v5; // [esp+18h] [ebp-8h] BYREF
  _BYTE v6[4]; // [esp+1Ch] [ebp-4h] BYREF

  if ( (*(_BYTE *)(this + 384) & 1) != 0
    && *(_DWORD *)(this + 388)
    && (((*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v3, &v4),
         sub_10236F60((int (__thiscall ***)(void *, int *, int *))this, &v3, &v4),
         (*(void (__thiscall **)(_DWORD, int *, _BYTE *))(**(_DWORD **)(this + 388) + 8))(
           *(_DWORD *)(this + 388),
           &v5,
           v6),
         v2 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this),
         v3 <= -2 - v5 + v2)
     || !(*(int (__thiscall **)(int))(*(_DWORD *)this + 1060))(this)) )
  {
    sub_1025AD90((unsigned __int16 *)this);
  }
  else if ( *(_DWORD *)(this + 372) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 372) + 128))(*(_DWORD *)(this + 372)) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 1068))(this);
    }
    else if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 372) + 204))(*(_DWORD *)(this + 372)) )
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 372) + 508))(*(_DWORD *)(this + 372));
      (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 372) + 768))(
        *(_DWORD *)(this + 372),
        this,
        *(_DWORD *)(this + 376),
        *(_DWORD *)(this + 380),
        0);
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 212))(this);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1052))(this, *(_DWORD *)(this + 372));
      sub_1025B720((_BYTE *)this, 1);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 372) + 124))(*(_DWORD *)(this + 372), 1);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 372) + 48))(*(_DWORD *)(this + 372), 0);
    }
  }
}
