void __thiscall sub_10177A20(void *this, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  int (__thiscall ***v3)(_DWORD, _DWORD); // eax

  v2 = __PAIR64__((unsigned int)this, a2);
  if ( !(*(int (__thiscall **)(unsigned int))(*(_DWORD *)a2 + 340))(a2)
    || (v3 = (int (__thiscall ***)(_DWORD, _DWORD))(*(int (__thiscall **)(unsigned int))(*(_DWORD *)a2 + 340))(a2),
        LODWORD(v2) = (**v3)(v3, 0),
        (_DWORD)v2) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 320))(v2) )
    {
      if ( sub_10177950(SHIDWORD(v2), v2) )
      {
        sub_1010DD80((_DWORD *)(HIDWORD(v2) + 1180), v2, 0.0);
        if ( !*(_BYTE *)(v2 + 1670) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B3CDC + 340))(
                 dword_106B3CDC,
                 v2,
                 HIDWORD(v2)) )
          {
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)HIDWORD(v2) + 840))(HIDWORD(v2), v2) )
            {
              sub_1010DD80((_DWORD *)(HIDWORD(v2) + 1156), v2, 0.0);
              *(_DWORD *)(HIDWORD(v2) + 196) = 0;
              sub_100EC3F0((_DWORD *)HIDWORD(v2), 0, 0.0, 0);
              (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B3CDC + 344))(
                dword_106B3CDC,
                v2,
                HIDWORD(v2));
              if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B3CDC + 348))(dword_106B3CDC, HIDWORD(v2)) == 5 )
              {
                (*(void (__thiscall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 440))(HIDWORD(v2));
                return;
              }
            }
            else if ( !dword_106BB4D0 )
            {
              return;
            }
            sub_1025FAC0(HIDWORD(v2));
          }
        }
      }
    }
  }
}
