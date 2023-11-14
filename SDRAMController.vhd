----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:59:46 10/19/2023 
-- Design Name: 
-- Module Name:    SDRAMController - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity SDRAMController is

    Port ( 
			  clk : in STD_LOGIC;
				SDRAM_addr : in STD_LOGIC_VECTOR(15 downto 0);
				SDRAM_rw	: in STD_LOGIC;
				SDRAM_memstrb   : in STD_LOGIC;
				SDRAM_din : in STD_LOGIC_VECTOR(7 downto 0);
				SDRAM_dout : out STD_LOGIC_VECTOR(7 downto 0));
end SDRAMController;

architecture Behavioral of SDRAMController is
    type ramemory is array (7 downto 0, 31 downto 0) of std_logic_vector(7 downto 0);
    signal RAM_SIG: ramemory;
	 
	signal counter : integer := 0;
begin

process (CLK)
    begin
        if CLK'event and CLK = '1' then		  
            
				if counter = 0 then
					for I in 0 to 7 loop
						for J in 0 to 31 loop
							RAM_SIG(i,j) <= "11110000";
						end loop;
					end loop;
					counter <= 1;	
				end if;
				
				if SDRAM_memstrb = '1' then
					if SDRAM_rw = '1' then
						RAM_SIG(to_integer(unsigned(SDRAM_addr(7 downto 5))),to_integer(unsigned(SDRAM_addr(4 downto 0)))) <= SDRAM_din;    
               ELSE
						SDRAM_dout <= RAM_SIG(to_integer(unsigned(SDRAM_addr(7 downto 5))),to_integer(unsigned(SDRAM_addr(4 downto 0))));
					end if;
				end if;
        end if;
    end process;
end Behavioral;
