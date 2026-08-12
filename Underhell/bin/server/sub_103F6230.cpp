void __usercall sub_103F6230(int a1@<ecx>, int a2@<edi>)
{
  int v3; // edi
  float v5; // [esp+4h] [ebp-4h] BYREF

  if ( !*(_BYTE *)(a1 + 1393) )
  {
    if ( sub_100D1940((_DWORD *)a1) )
    {
      v3 = sub_100D1940((_DWORD *)a1);
      if ( v3 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
        {
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 944))(a1, 197, a2);
          v5 = 3.4028235e38;
          sub_100D2CB0((float *)(a1 + 1140), &v5);
          v5 = 3.4028235e38;
          sub_100D2D00((float *)(a1 + 1132), &v5);
          ++*(_DWORD *)(a1 + 1372);
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)off_10627F88 + 116))(off_10627F88, v3, 1);
        }
      }
    }
  }
}
